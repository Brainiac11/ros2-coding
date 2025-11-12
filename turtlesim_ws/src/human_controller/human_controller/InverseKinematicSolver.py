from numpy import float64
import rclpy
from rclpy.node import Node
from human_interfaces.srv import InverseKinematics  # type: ignore
import math
import numpy as np
from human_controller import JacobianPsuedoInverseSolver


class InverseKinematicsSolver(Node):

    def __init__(self):
        super().__init__("inverse_kinematics_solver")

        self.srv = self.create_service(
            InverseKinematics, "solve_ik", self.solve_ik_callback
        )

        self.get_logger().info("IK solver service started")
        self.get_logger().info("at /solve_ik")

    def solve_ik_callback(self, request, response):
        try:
            target_x = request.target_x
            target_y = request.target_y
            target_z = request.target_z

            l1 = request.link1_length
            l2 = request.link2_length
            l3 = request.link3_length

            if l1 <= 0 or l2 <= 0 or l3 <= 0:
                response.success = False
                response.message = "Every link lengths has to be positive"
                return response

            fix_j1 = request.fix_joint1
            fix_j2 = request.fix_joint2
            fix_j3 = request.fix_joint3
            result: dict

            if fix_j1 and fix_j2 and fix_j3:
                response.success = False
                response.message = "All 3 joints cannot be fixed"
                return response
            elif fix_j1 and fix_j2:
                result = self.solve_with_j1_j2_fixed(
                    target_x,
                    target_y,
                    target_z,
                    l1,
                    l2,
                    l3,
                    request.fixed_joint1_angle,
                    request.fixed_joint2_angle,
                )
            elif fix_j1 and fix_j3:
                result = self.solve_with_j1_j3_fixed(
                    target_x,
                    target_y,
                    target_z,
                    l1,
                    l2,
                    l3,
                    request.fixed_joint1_angle,
                    request.fixed_joint3_angle,
                )
            elif fix_j2 and fix_j3:
                result = self.solve_with_j2_j3_fixed(
                    target_x,
                    target_y,
                    target_z,
                    l1,
                    l2,
                    l3,
                    request.fixed_joint2_angle,
                    request.fixed_joint3_angle,
                )
            elif fix_j1:
                result = self.solve_with_j1_fixed(
                    target_x, target_y, target_z, l1, l2, l3, request.fixed_joint1_angle
                )
            elif fix_j2:
                result = self.solve_with_j2_fixed(
                    target_x, target_y, target_z, l1, l2, l3, request.fixed_joint2_angle
                )
            elif fix_j3:
                result = self.solve_with_j3_fixed(
                    target_x, target_y, target_z, l1, l2, l3, request.fixed_joint3_angle
                )
            else:
                result = self.solve_standard_3joint_ik_jacobian_psuedoinverse(
                    target_x, target_y, target_z, l1, l2, l3
                )

            if result["success"]:
                response.success = True
                response.joint1_angle = result["joint1"]
                response.joint2_angle = result["joint2"]
                response.joint3_angle = result["joint3"]
                response.message = "IK found solution"

                self.get_logger().info(
                    f"IK Solved J1={result['joint1']:.3f}, "
                    f"J2={result['joint2']:.3f}, J3={result['joint3']:.3f}"
                )
            else:
                response.success = False
                response.message = result["message"]
                self.get_logger().warn(f"IK failed - {result['message']}")

        except Exception as e:
            response.success = False
            response.message = f"Error while solving-  {str(e)}"
            self.get_logger().error(f"Exception in IK solver: {str(e)}")

        return response

    def solve_standard_3joint_ik_jacobian_psuedoinverse(
        self, x: float64, y: float64, z: float, l1: float64, l2: float64, l3: float64
    ) -> dict:
        solver: JacobianPsuedoInverseSolver.JacobianPsuedoInverseSolver = (
            JacobianPsuedoInverseSolver.JacobianPsuedoInverseSolver(
                target=np.array([x, y, z]),
                link_lengths=np.array([l1, l2, l3]),
                link_global_angles=np.zeros(3),
            )
        )
        thetas = JacobianPsuedoInverseSolver.reduce_radians(
            JacobianPsuedoInverseSolver.convert_to_global_angles(
                solver.jacobian_gradient_descent()
            )
        )
        return {
            "success": True,
            "joint1": thetas[0],
            "joint2": thetas[1],
            "joint3": thetas[2],
            "message": "Success",
        }

    def solve_with_j1_fixed(self, x, y, z, l1, l2, l3, j1_fixed):
        x_plane = x * math.cos(-j1_fixed) - y * math.sin(-j1_fixed)

        r = x_plane
        h = z
        d = math.sqrt(r**2 + h**2)

        if d > (l1 + l2 + l3) or d < abs(l1 - l2 - l3):
            return {
                "success": False,
                "message": "Target out of bounds with fixed joint 1",
            }

        result = self.solve_planar_3link(r, h, l1, l2, l3)

        if result["success"]:
            return {
                "success": True,
                "joint1": j1_fixed,
                "joint2": result["joint2"],
                "joint3": result["joint3"],
                "message": "Success",
            }
        else:
            return result

    def solve_with_j2_fixed(self, x, y, z, l1, l2, l3, j2_fixed):
        joint1 = math.atan2(y, x)

        r = math.sqrt(x**2 + y**2)

        x1 = l1 * math.cos(j2_fixed)
        z1 = l1 * math.sin(j2_fixed)

        dx = r - x1
        dz = z - z1
        d_remaining = math.sqrt(dx**2 + dz**2)

        if d_remaining > (l2 + l3) or d_remaining < abs(l2 - l3):
            return {
                "success": False,
                "message": "Target out of bounds with fixed joint 2",
            }

        angle_to_target = math.atan2(dz, dx)

        cos_j3 = (l2**2 + l3**2 - d_remaining**2) / (2 * l2 * l3)
        cos_j3 = max(-1.0, min(1.0, cos_j3))
        joint3 = math.acos(cos_j3)

        joint3 = -joint3

        return {
            "success": True,
            "joint1": joint1,
            "joint2": j2_fixed,
            "joint3": joint3,
            "message": "Success",
        }

    def solve_with_j3_fixed(self, x, y, z, l1, l2, l3, j3_fixed):
        l_eff_x = l2 + l3 * math.cos(j3_fixed)
        l_eff_z = l3 * math.sin(j3_fixed)
        l_effective = math.sqrt(l_eff_x**2 + l_eff_z**2)

        offset_angle = math.atan2(l_eff_z, l_eff_x)

        joint1 = math.atan2(y, x)
        r = math.sqrt(x**2 + y**2)
        d = math.sqrt(r**2 + z**2)

        if d > (l1 + l_effective) or d < abs(l1 - l_effective):
            return {
                "success": False,
                "message": "Target out of bounds with fixed joint 3",
            }

        cos_angle = (l1**2 + l_effective**2 - d**2) / (2 * l1 * l_effective)
        cos_angle = max(-1.0, min(1.0, cos_angle))

        alpha = math.atan2(z, r)
        cos_beta = (l1**2 + d**2 - l_effective**2) / (2 * l1 * d)
        cos_beta = max(-1.0, min(1.0, cos_beta))
        beta = math.acos(cos_beta)

        joint2 = alpha + beta - offset_angle

        return {
            "success": True,
            "joint1": joint1,
            "joint2": joint2,
            "joint3": j3_fixed,
            "message": "Success",
        }

    def solve_with_j1_j2_fixed(self, x, y, z, l1, l2, l3, j1_fixed, j2_fixed):
        x2 = l1 * math.cos(j1_fixed) * math.cos(j2_fixed)
        y2 = l1 * math.sin(j1_fixed) * math.cos(j2_fixed)
        z2 = l1 * math.sin(j2_fixed)

        x2 += l2 * math.cos(j1_fixed) * math.cos(j2_fixed)
        y2 += l2 * math.sin(j1_fixed) * math.cos(j2_fixed)
        z2 += l2 * math.sin(j2_fixed)

        dx = x - x2
        dy = y - y2
        dz = z - z2
        dist = math.sqrt(dx**2 + dy**2 + dz**2)

        if abs(dist - l3) > 0.001:
            return {
                "success": False,
                "message": f"Target not reachable: requires link3={dist:.3f}, available={l3:.3f}",
            }

        angle_vertical = math.atan2(dz, math.sqrt(dx**2 + dy**2))

        joint3 = angle_vertical - j2_fixed

        return {
            "success": True,
            "joint1": j1_fixed,
            "joint2": j2_fixed,
            "joint3": joint3,
            "message": "Success",
        }

    def solve_with_j1_j3_fixed(self, x, y, z, l1, l2, l3, j1_fixed, j3_fixed) -> dict:
        # need to work on this
        return {}

    def solve_with_j2_j3_fixed(self, x, y, z, l1, l2, l3, j2_fixed, j3_fixed):
        r_expected = (
            l1 * math.cos(j2_fixed)
            + l2 * math.cos(j2_fixed)
            + l3 * math.cos(j2_fixed + j3_fixed)
        )
        z_expected = (
            l1 * math.sin(j2_fixed)
            + l2 * math.sin(j2_fixed)
            + l3 * math.sin(j2_fixed + j3_fixed)
        )

        r_actual = math.sqrt(x**2 + y**2)

        if abs(r_actual - r_expected) > 0.001 or abs(z - z_expected) > 0.001:
            return {
                "success": False,
                "message": f"Target out of bounds with J2 and J3 fixed",
            }

        joint1 = math.atan2(y, x)

        return {
            "success": True,
            "joint1": joint1,
            "joint2": j2_fixed,
            "joint3": j3_fixed,
            "message": "Success",
        }

    def solve_planar_3link(self, x, z, l1, l2, l3):
        d = math.sqrt(x**2 + z**2)

        if d > (l1 + l2 + l3) or d < abs(l1 - l2 - l3):
            return {
                "success": False,
                "message": "Target out of bounds in planar configuration",
            }

        alpha = math.atan2(z, x)

        cos_elbow = (l1**2 + l2**2 - (d - l3) ** 2) / (2 * l1 * l2)
        cos_elbow = max(-1.0, min(1.0, cos_elbow))
        elbow_angle = math.acos(cos_elbow)

        cos_shoulder = (l1**2 + (d - l3) ** 2 - l2**2) / (2 * l1 * (d - l3))
        cos_shoulder = max(-1.0, min(1.0, cos_shoulder))
        shoulder_angle = math.acos(cos_shoulder)

        joint2 = alpha + shoulder_angle
        joint3 = math.pi - elbow_angle

        return {
            "success": True,
            "joint2": joint2,
            "joint3": joint3,
            "message": "Success",
        }


def main(args=None):
    rclpy.init(args=args)

    ik_solver = InverseKinematicsSolver()

    try:
        rclpy.spin(ik_solver)
    except KeyboardInterrupt:
        pass
    finally:
        ik_solver.destroy_node()
        rclpy.shutdown()

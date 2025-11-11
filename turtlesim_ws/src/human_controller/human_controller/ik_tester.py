import rclpy
from rclpy.node import Node
from human_interfaces.srv import InverseKinematics # type: ignore
import math


class IKTester(Node):

    def __init__(self):
        super().__init__('ik_tester')
        self.client = self.create_client(InverseKinematics, 'solve_ik')
        
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('waiting for IK')
        
        self.get_logger().info('IK service is connected')

    def send_ik_request(self, target_x, target_y, target_z, 
                       l1, l2, l3,
                       fix_j1=False, fix_j2=False, fix_j3=False,
                       j1_angle=0.0, j2_angle=0.0, j3_angle=0.0):
        request = InverseKinematics.Request()
        request.target_x = target_x
        request.target_y = target_y
        request.target_z = target_z
        request.link1_length = l1
        request.link2_length = l2
        request.link3_length = l3
        request.fix_joint1 = fix_j1
        request.fix_joint2 = fix_j2
        request.fix_joint3 = fix_j3
        request.fixed_joint1_angle = j1_angle
        request.fixed_joint2_angle = j2_angle
        request.fixed_joint3_angle = j3_angle
        
        self.get_logger().info(f'SENDING IK REQUEST NOW')
        self.get_logger().info(f'Target- ({target_x:.2f}, {target_y:.2f}, {target_z:.2f})')
        self.get_logger().info(f'Link lengths- L1={l1:.2f}, L2={l2:.2f}, L3={l3:.2f}')
        if fix_j1 or fix_j2 or fix_j3:
            self.get_logger().info(f'Fixed joints- J1={fix_j1}, J2={fix_j2}, J3={fix_j3}')
        
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        
        response = future.result()
        
        if response.success:
            self.get_logger().info(f'\nIK Solution Found:')
            self.get_logger().info(f'joint 1 {response.joint1_angle:.4f} degrees: ({math.degrees(response.joint1_angle):.2f})')
            self.get_logger().info(f'joint 2 {response.joint2_angle:.4f} degrees: ({math.degrees(response.joint2_angle):.2f})')
            self.get_logger().info(f'joint 3 {response.joint3_angle:.4f} degrees: ({math.degrees(response.joint3_angle):.2f})')
        else:
            self.get_logger().error(f'\n😈 IK failed {response.message}')
        
        
        return response


def main(args=None):
    rclpy.init(args=args)
    
    client = IKTester()
    
    client.get_logger().info('\nTest 1- 3-joint IK')
    client.send_ik_request(
        target_x=1.5,
        target_y=1.0,
        target_z=0.0,
        l1=2.0,
        l2=1.0,
        l3=0.5
    )
    
    client.get_logger().info('\nTest 2- IK with joint 1 Fixed at 45 degrees')
    client.send_ik_request(
        target_x=1.5,
        target_y=1.5,
        target_z=0.5,
        l1=1.0,
        l2=1.0,
        l3=0.5,
        fix_j1=True,
        j1_angle=math.radians(45)
    )
    
    client.get_logger().info('\nTest 3- IK with joint 2 Fixed at 30 degrees')
    client.send_ik_request(
        target_x=2.0,
        target_y=0.5,
        target_z=1.0,
        l1=1.0,
        l2=1.0,
        l3=0.5,
        fix_j2=True,
        j2_angle=math.radians(30)
    )
    
    client.get_logger().info('\nTest 4- IK with joint 3 Fixed at -20 degrees')
    client.send_ik_request(
        target_x=1.8,
        target_y=0.0,
        target_z=0.8,
        l1=1.0,
        l2=1.0,
        l3=0.5,
        fix_j3=True,
        j3_angle=math.radians(-20)
    )
    
    client.get_logger().info('\nTest 5- Out of bounds')
    client.send_ik_request(
        target_x=5.0,
        target_y=5.0,
        target_z=5.0,
        l1=1.0,
        l2=1.0,
        l3=0.5
    )
    
    client.destroy_node()
    rclpy.shutdown()
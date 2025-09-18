from geometry_msgs.msg import Pose
from geometry_msgs.msg import Vector3

class PoseMath:
    @staticmethod
    def subtract(p1: Pose, p2: Pose) -> Pose:
        x = p2.position.x - p1.position.x
        y = p2.position.y - p1.position.y
        z = p2.position.z - p1.position.z

        tx = p2.orientation.x - p1.orientation.x
        ty = p2.orientation.y - p1.orientation.y
        tz = p2.orientation.z - p1.orientation.z
        pose  = Pose()
        pose.position = Vector3(x,y,z)
        pose.orientation = Vector3(tx,ty,tz)
        return pose
    @staticmethod
    def add(p1: Pose, p2: Pose) -> Pose:
        x = p2.position.x + p1.position.x
        y = p2.position.y + p1.position.y
        z = p2.position.z + p1.position.z

        tx = p2.orientation.x + p1.orientation.x
        ty = p2.orientation.y + p1.orientation.y
        tz = p2.orientation.z + p1.orientation.z
        pose  = Pose()
        pose.position = Vector3(x,y,z)
        pose.orientation = Vector3(tx,ty,tz)
        return pose
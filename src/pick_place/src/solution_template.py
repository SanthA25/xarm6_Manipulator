#!/usr/bin/env python
import rospy
import sys
import tf_conversions
import tf2_ros
import moveit_commander
import moveit_msgs.msg
from moveit_commander.conversions import pose_to_list
from geometry_msgs.msg import PoseStamped, Pose
from path_planner.srv import *
from tf.transformations import *
from moveit_msgs.msg import Grasp

class Planner():

  def __init__(self):
    #TODO: Initialise move it interface
    moveit_commander.roscpp_initialize(sys.argv)
    self.robot = moveit_commander.RobotCommander()
    self.scene = moveit_commander.PlanningSceneInterface()
    self.group_name = "xarm6"

    self.move_group = moveit_commander.MoveGroupCommander(self.group_name)
    #display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path',
                                               #moveit_msgs.msg.DisplayTrajectory,
                                               #queue_size=20)

 #---  def wait_for_state_update(self,box_name, box_is_known=False, box_is_attached=False, timeout=0.5):

    #TODO: Whenever we change something in moveit we need to make sure that the interface has been updated properly

 #---  def addObstacles(self):

    #TODO: Add obstables in the world


    #Cargo names
#++     targets = ["RedBox",
#++                "BlueBox",
#++                "GreenBox"]



    #goal names
#++     boxes = ["DepositBoxGreen",
#++                "DepositBoxRed",
    #++            "DepositBoxBlue"]

  def goToPose(self,pose_goal):

      move_group = self.move_group


      move_group.set_pose_target(pose_goal)

      plan = move_group.go(wait=True)

      move_group.stop()

    #TODO: Code used to move to a given position using move it


 #---  def detachBox(self,box_name):

  #TODO: Open the gripper and call the service that releases the box


 #---  def attachBox(self,box_name):

  #TODO: Close the gripper and call the service that releases the box



class myNode():
  def __init__(self):
    #TODO: Initialise ROS and create the service calls
    rospy.init_node('solution', anonymous=True)
    # Good practice trick, wait until the required services are online before continuing with the aplication
#++    rospy.wait_for_service('RequestGoal')
#++    rospy.wait_for_service('AttachObject')

#---  def getGoal(self,action):

    #TODO: Call the service that will provide you with a suitable target for the movement


 #---  def tf_goal(self, goal):

    #TODO:Use tf2 to retrieve the position of the target with respect to the proper reference frame


  def main(self):
    #TODO: Main code that contains the aplication
    self.planner = Planner()
#--    self.planner.addObstacles()

#Verde
    pose_goal = Pose()
    pose_goal.orientation.x= 1.0
    pose_goal.position.x = 0.211049
    pose_goal.position.y = 0.186247
    pose_goal.position.z = 0.023993

    self.planner.goToPose(pose_goal)

    pose_goal = Pose()
    pose_goal.orientation.x= 1.0
    pose_goal.position.x = 0.25969
    pose_goal.position.y = -0.404
    pose_goal.position.z = 0.15

    self.planner.goToPose(pose_goal)

#Rojo
    pose_goal = Pose()
    pose_goal.orientation.x= 1.0
    pose_goal.position.x = 0.19994
    pose_goal.position.y = 0.516144
    pose_goal.position.z = 0.0238929

    self.planner.goToPose(pose_goal)

    pose_goal = Pose()
    pose_goal.orientation.x= 1.0
    pose_goal.position.x = 0.04386
    pose_goal.position.y = -0.385
    pose_goal.position.z = 0.15

    self.planner.goToPose(pose_goal)

#Azul
    pose_goal = Pose()
    pose_goal.orientation.x= 1.0
    pose_goal.position.x = 0.0758983
    pose_goal.position.y = 0.56047
    pose_goal.position.z = 0.023922

    self.planner.goToPose(pose_goal)

    pose_goal = Pose()
    pose_goal.orientation.x= 1.0
    pose_goal.position.x = -0.17253
    pose_goal.position.y = -0.3771
    pose_goal.position.z = 0.15

    self.planner.goToPose(pose_goal)

    rospy.signal_shutdown("Task Completed")



if __name__ == '__main__':
    #group_names = robot.get_group_names()
    #print "============ Available Planning Groups:", robot.get_group_names()
    try:
        node = myNode()
        node.main()

    except rospy.ROSInterruptException:
        pass

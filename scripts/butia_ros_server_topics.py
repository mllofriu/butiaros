#!/usr/bin/env python
from butiaros.srv import *
import rospy
from pybot import pybot_client
from std_msgs.msg import String

def butia_ros_server_topics(topic,vel,cmd,a):
    pub = rospy.Publisher(topic, String)
    rospy.init_node('butia_ros_server_topics', anonymous=True)
    r = rospy.Rate(vel) # 10 = 10hz

    while not rospy.is_shutdown():
        robot = pybot_client.robot()
 
        if cmd == "get_gray":
            value = robot.getGray(a)
        elif cmd == "get_distance":
            value = robot.getDistance(a)
        elif cmd == "get_button":
            value = robot.getButton(a)
        else:
            print "Invalid Command: %s"%cmd
            sys.exit(1)	

        print "Publishing [%s(%s):%s]"%(cmd, a, value)
        pub.publish("%s"%value)
        r.sleep()

def usage():
    return "usasge:\nbutia_ros_server_topics topic_name rate cmd a\ncmd: get_gray | get_distance | get_button"

if __name__ == "__main__":
    if len(sys.argv) == 5:
        topic = sys.argv[1]
        vel = int(sys.argv[2])
        cmd = sys.argv[3]
        a = int(sys.argv[4])
        print " %s(%s)"%(cmd,a)
        butia_ros_server_topics(topic,vel,cmd,a)
    else:
        print usage()
        sys.exit(1)

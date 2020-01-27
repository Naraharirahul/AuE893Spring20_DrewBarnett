circle.py:
	
This code performs a simple operation on the turtlebot. In this script, predefined variables for speed and distance will automatically calculate the required angular rate at which the turtlebot will need to rotate in order to complete a full circle. 

square_openloop.py:

This python script builds off of the previous circle.py, except instead of driving in a circle the turtlebot will form a square. The turtlebot has a constant speed of 0.2 (units/sec) and a angular rate of 0.2 (rad/sec) while cornering. This code was written by utilizing two nested while loops which handled the turning and forward operations separately, which was then nested inside a for loop of range(4) for each side of the square. 

square_closedloop.py

This python script utilizes a variation of the gotogoal.py code. In this script, the turtlebot can follow multiple predefined points, but instead of moving to those points while turning at the same time, the turtlebot instead points to each successive point and then proceeds to move forward, forming straight lines of travel. This was achieved by utilizing two while loops, one for turning the turtlebot and one for moving the turtlebot. Both of these loops were then nested inside of another while loop, which breaks only when the turtlebot is within a specific range close to each predefined point. 
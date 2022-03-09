# Gears
Created by: Md Ishraq Tanzim
Date	  : January, 2022

The C program calculates the required information to decide on the size of the motor gear to be used depending on the size of the wheel gear and vice versa.

1) The gear ratio in the program is computed based on the number of teeth on each gear. It is displayed as gearRatio:1 for ratios where the smaller gear is on the motor 
   and as 1:gearRatio when the larger gear is on the motor, where gearRatio is the number of teeth in the larger gear divided by the number of teeth in the smaller gear.

2) The program asks the user for 4 pieces of information: 
	(1) the number of teeth of the motor gear, 
	(2) the number of teeth of the wheel gear, 
	(3) the size of the wheel in centimeters and 
	(4) the rotations per minute (i.e., rpm) of the motor.

3) The program then calculates and displays the gear ratio.

4) It also calculates the rpm that the wheel will turn at, based on the motor rpm and gear ratio.

5) The program then displays the wheel speed as cm per second as well as km/h.

6) Command for compiling the code in linux environment: gcc -o gears gears.c
7) Command for running the code after compiling	      : ./gears	 

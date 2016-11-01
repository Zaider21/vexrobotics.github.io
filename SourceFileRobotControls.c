#pragma config(Sensor, in1,    leftTracker,    sensorLineFollower)
#pragma config(Sensor, in2,    middleTracker,  sensorLineFollower)
#pragma config(Sensor, in3,    rightTracker,   sensorLineFollower)
#pragma config(Sensor, in8,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl11, sonar,          sensorSONAR_inch)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port5,           teleMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1 == 1)
	{
//Begining of Speaker Module
//Volume of Sound
	nVolume = 4;
//Sound Files
		playSoundFile("Begin.wav");
		playSoundFile("Nyan1.wav");
		playSoundFile("Nyan2.wav");


//End of Speaker Module

//Begining of Driving
			motor[leftMotor] = vexRT[Ch3];
			motor[rightMotor] = vexRT[Ch2];
//End of Driving

//Begining of Claw Arm

//Begining of Telescoping
			if(vexRT[Btn5U] == 1)
				{
//Raise Arm
					motor[teleMotor] = 127;
				}
			else if(vexRT[Btn6U] == 1)
			{
//Lower Arm
				motor[teleMotor] = -127;
			}
			else if(vexRT[Btn7U] == 1)
			{
//Lift Claw: Capped Speed
				motor[teleMotor] = 25;
			}
			else if(vexRT[Btn7D] == 1)
			{
//Lower Claw: Capped Speed
				motor[teleMotor] = -25;
			}
			else
			{
//Do Nothing
				motor[teleMotor] = 0;
			}
//End of Telescoping

//Begining of Arm Claw
			if(vexRT[Btn5D] == 1)
			{
//Open Claw
				motor[clawMotor] = 127;
			}
			else if(vexRT[Btn6D] == 1)
			{
//Close Claw
				motor[clawMotor] = -127;
			}
			else if(vexRT[Btn7L] == 1)
			{
//Open Arm: Capped Speed
				motor[clawMotor] = 40;
			}
			else if(vexRT[Btn7R] == 1)
			{
//Close Arm: Capped Speed
				motor[clawMotor] = -20;
			}
			else
			{
//Do Nothing
				motor[clawMotor] = 0;
			}
//End of Arm
//End of Whole Claw
	}
}

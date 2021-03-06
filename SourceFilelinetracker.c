#pragma config(Sensor, in1,    leftTracker,    sensorLineFollower)
#pragma config(Sensor, in2,    middleTracker,  sensorLineFollower)
#pragma config(Sensor, in3,    rightTracker,   sensorLineFollower)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port5,           teleMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int line = 500;
	while(true)
	{
		if(SensorValue[leftTracker] > line)
		{
			motor[rightMotor] = -63;
			motor[leftMotor] = 0;
		}
		if(SensorValue[middleTracker] > line)
		{
			motor[rightMotor] = -63;
			motor[leftMotor] = -63;
		}
		if(SensorValue[rightTracker] > line)
		{
			motor[leftMotor] = -63;
			motor[rightMotor] = 0;
		}
	}

}

#pragma config(Sensor, dgtl11, sonarSensor,    sensorSONAR_inch)
#pragma config(Motor,  port1,           frontRight,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           backRight,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           teleMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           backLeft,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          frontLeft,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (1 == 1)
	{
		//Left Motors
	motor[backLeft] = vexRT[Ch3];
	motor[frontLeft] = vexRT[Ch3];
	//Right Motors
	motor[backRight] = vexRT[Ch2];
	motor[frontRight] = vexRT[Ch2];

		//Telescoping
		if(vexRT[Btn5U] == 1)
		{
			motor[teleMotor] = 50;
		}
		else if(vexRT[Btn6U] == 1)
		{
			motor[teleMotor] = -50;
		}
		else
		{
			motor[teleMotor] = 0;
		}

		//Claw
		if(vexRT[Btn5D] == 1)
		{
			motor[clawMotor] = 100;
		}
		else if(vexRT[Btn6D] == 1)
		{
			motor[clawMotor] = -100;
		}
		else
		{
			motor[clawMotor] = 0;
		}
	}
		if(vexRT[Btn8R] == 1)
		{
			//Strafe Right
			motor[frontRight] = -100;
			motor[backRight] = 100;
			motor[frontLeft] = 100;
			motor[backLeft] = -100;
		}

		else(vexRT[Btn8L] == 1);
		{
			//Strafe RIght
			motor[frontRight] = 100;
			motor[backRight] = -100;
			motor[frontLeft] = -100;
			motor[backLeft] = 100;
		}

}
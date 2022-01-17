// Global Constants for Sensors
const tSensors GYRO_PORT = S2;
const tSensors ULTRASONIC_PORT = S1;
const tSensors COLOR_PORT = S3;

// Global Constants
const float INTERVAL_DIST_CM = 45;
const int NUM_INTERVAL = 4;

// Declare Size for Global Array
const int NUM_ROW = 5;
const int NUM_COL = 2;
float valuesArray[NUM_ROW][NUM_COL];

// Check if mobile object started moving function
bool isMoving()
{
	float initalDistance = SensorValue[ULTRASONIC_PORT];
	return ((SensorValue[ULTRASONIC_PORT] != initalDistance));
}

/*
void calcVelocity()
{
	for(int index = 0; index < NUM_INTERVAL; index++)
	{
		float velocity = INTERVAL_DIST_CM / valuesArray[index][1];
		valuesArray[index][0] = velocity;
	}
}
*/

task main()
{

	while(!getButtonPress(buttonEnter))
	{}
	while(getButtonPress(buttonEnter))
	{}
	// To call isMoving function
	while(!isMoving())
	{}
	motor[motorA] = motor[motorD] = 20;

	// To call calcVelocity function
	//calcVelocity();
}

//Antonio Monteiro, Altitude Lab

#include <stdio.h>

int main() {

	//Variable declarations
	double altitude = 0.0;
	double milesPerHour = 0.0;
	double milesPerMinute = 0.0;
	double minutesNeeded = 0.0;
	double distanceRequired = 0.0;

	//Ask the user for altitude and mph
	printf("What is your altitude in feet? ");
	scanf_s("%lf", &altitude);

	printf("What is your speed in miles per hour? ");
	scanf_s("%lf", &milesPerHour);

	//Find milesPerMinute and minutesNeeded
	minutesNeeded = altitude / 500;
	milesPerMinute = milesPerHour / 60;

	//Find the distance required to safely descent
	distanceRequired = minutesNeeded * milesPerMinute;
	
	//Output to the user
	printf("You need to start your descent at %f miles from the airport.\n", distanceRequired);

	system("pause");
	return 0;

}
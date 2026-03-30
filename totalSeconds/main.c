
/*
* 
* file: main.c
* Author: jamal salem
* 
* Description: This program demonstrates the use of integer data typ and trancmission of data from hours to minutes and seconds
* 
*/

#include <stdio.h>
#include <stdlib.h>

#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60

int main(int argc, char** argv)

{

	int total_seconds = 5000; // Total seconds to be converted

	int hours = total_seconds / (MINUTES_IN_HOUR * SECONDS_IN_MINUTE); // Calculate hours
	int remaining_seconds = total_seconds % (MINUTES_IN_HOUR * SECONDS_IN_MINUTE); // Calculate remaining seconds after extracting hours
	int minutes = remaining_seconds / SECONDS_IN_MINUTE; // Calculate minutes
	int	seconds = remaining_seconds % SECONDS_IN_MINUTE; // Calculate remaining seconds after extracting minutes



	printf("Total Seconds: %d\n", total_seconds); // Print total seconds
	printf("Hours: %d\n", hours); // Print hours
	printf("Minutes: %d\n", minutes); // Print minutes
	printf("Seconds: %d\n", seconds); // Print seconds
	
	return (EXIT_SUCCESS);








}

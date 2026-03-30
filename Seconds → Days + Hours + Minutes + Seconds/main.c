/*
* 
* file: main.c
* Author: jamal salem
* 
* 
*/

#include <stdio.h>
#include <stdlib.h>

#define SECONDS_IN_DAY 86400
#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_MINUTE 60

int main() {
    int total_seconds = 90061;

    int days = total_seconds / SECONDS_IN_DAY;
    int remaining = total_seconds % SECONDS_IN_DAY;

    int hours = remaining / SECONDS_IN_HOUR;
    remaining = remaining % SECONDS_IN_HOUR;

    int minutes = remaining / SECONDS_IN_MINUTE;
    int seconds = remaining % SECONDS_IN_MINUTE;

    printf("%d days, %d hours, %d minutes, %d seconds\n",
        days, hours, minutes, seconds);

  



	return (EXIT_SUCCESS);

}



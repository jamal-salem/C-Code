/*
 * File:   main.c
 * Author: Jamal Salem
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#define G 9.81
#define MAX_LENGTH 100

typedef struct Input Input;

struct Input
{
    float theta;
    float speed;
};

void getInputValuesFromString(char string[], Input* inputValues);

int main(int argc, char** argv)
{
    char input[MAX_LENGTH];
    fgets(input, MAX_LENGTH, stdin);

    while (input[0] != 'q')
    {
        Input inputValues;
        getInputValuesFromString(input, &inputValues);

        float radians = inputValues.theta * M_PI / 180.0f;

        float vox = inputValues.speed * cosf(radians);
        float voy = inputValues.speed * sinf(radians);

        float t = voy / G;

        float h = (voy * voy) / (2.0f * G);

        float d = vox * 2.0f * t;

        printf("%.2f %.2f\n", h, d);

        fgets(input, MAX_LENGTH, stdin);
    }

    return 0;
}

void getInputValuesFromString(char string[], Input* inputValues)
{
    int spaceIndex = -1;
    char* result = NULL;
    result = strchr(string, ' ');
    char* stringStart = &string[0];
    spaceIndex = result - stringStart;

    char* thetaString = malloc((spaceIndex + 1) * sizeof(char));

    strncpy(thetaString, string, spaceIndex);
    thetaString[spaceIndex] = '\0';

    inputValues->theta = atof(thetaString);

    string = &string[spaceIndex + 1];
    inputValues->speed = atof(string);

    free(thetaString);
    thetaString = NULL;
}

//
// Created by LugowoyKonstantin on 02-Sep-19.
//
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

#define PI 3.14159

bool isPositiveFloat(float floatValue) {
    if (floatValue > 0 && floatValue < INT_MAX) {
        return true;
    } else {
        return false;
    }
}

float enterRadiusOfCircle() {
    printf("Enter radius of the circle : \n");
    float radiusOfCircle = 0.0;
    while (true) {
        scanf("%f", &radiusOfCircle);
        if (isPositiveFloat(radiusOfCircle)) {
            break;
        }
    }
    return radiusOfCircle;
}

void calculateAreaOfCircleThroughRadius() {
    float radiusOfCircle = enterRadiusOfCircle();
    float areaOfCircle = PI * pow(radiusOfCircle, 2);
    printf("The result area of a circle with a radius of %.3f is : %.3f", radiusOfCircle, areaOfCircle);
}
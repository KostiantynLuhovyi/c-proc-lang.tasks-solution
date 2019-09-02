//
// Created by LugowoyKonstantin on 02-Sep-19.
//
#include <stdio.h>

void calculateLengthOfCircleThroughRadius() {
    float radiusOfCircle = enterRadiusOfCircle();
    float lengthOfCircle = 2 * PI * radiusOfCircle;
    printf("The result length of a circle with a radius of %.3f is : %.3f", radiusOfCircle, lengthOfCircle);
}
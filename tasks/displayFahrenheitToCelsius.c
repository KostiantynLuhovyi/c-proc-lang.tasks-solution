//
// Created by LugowoyKonstantin on 19-Aug-19.
//
#include <stdio.h>
#include <stdbool.h>

float enterLowerFahrenheitTemperature() {
    float lowerFahrenheitTemperature = 0;
    printf("Enter the lower fahrenheit temperature : \n");
    scanf("%f", &lowerFahrenheitTemperature);
    return lowerFahrenheitTemperature;
}

float enterUpperFahrenheitTemperature() {
    float upperFahrenheitTemperature = 0;
    printf("Enter the upper fahrenheit temperature : \n");
    scanf("%f", &upperFahrenheitTemperature);
    return upperFahrenheitTemperature;
}

float enterStepCalculateCelsiusTemperatures() {
    float stepTemperatures = 0;
    printf("Enter step to calculate temperature table : \n");
    scanf("%f", &stepTemperatures);
    return stepTemperatures;
}

bool isUpperGreatestOrEqualThanLowerFahrenheitTemperatures(float lowerFahrenheitTemperature,
                                                           float upperFahrenheitTemperature) {
    bool resultOfCheck;
    if (lowerFahrenheitTemperature <= upperFahrenheitTemperature) {
        resultOfCheck = true;
    } else {
        resultOfCheck = false;
    }
    return resultOfCheck;
}

bool isStepLessThanFahrenheitRangeDifference(float stepTemperatures, float lowerFahrenheitTemperature,
                                                                     float upperFahrenheitTemperature) {
    bool resultOfCheck;
    float differenceRange = upperFahrenheitTemperature - lowerFahrenheitTemperature;
    if (stepTemperatures <= differenceRange) {
        resultOfCheck = true;
    } else {
        resultOfCheck = false;
    }
    return resultOfCheck;
}

void displayTableTemperatureFahrenheitToCelsius() {
    float fahrenheit, celsius;
    float lowerFahrenheitTemperature = enterLowerFahrenheitTemperature();
    float upperFahrenheitTemperature = enterUpperFahrenheitTemperature();
    float stepTemperatures = enterStepCalculateCelsiusTemperatures();

    if (isUpperGreatestOrEqualThanLowerFahrenheitTemperatures(lowerFahrenheitTemperature, upperFahrenheitTemperature)
            &&
        isStepLessThanFahrenheitRangeDifference(stepTemperatures, lowerFahrenheitTemperature,upperFahrenheitTemperature)) {
        fahrenheit = lowerFahrenheitTemperature;
        while (fahrenheit <= upperFahrenheitTemperature) {
            printf("%10.2f", fahrenheit);
            celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
            printf("%10.2f \n", celsius);
            fahrenheit += stepTemperatures;
            if (fahrenheit == stepTemperatures) {
                break;
            }
        }
    } else {
        printf("The entered data is not correct for calculating the temperature table.");
    }
}
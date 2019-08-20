//
// Created by LugowoyKonstantin on 19-Aug-19.
//
#include <stdio.h>
#include <stdbool.h>

float enterLowerCelsiusTemperature() {
    float lowerCelsiusTemperature = 0;
    printf("Enter the lower celsius temperature : \n");
    scanf("%f", &lowerCelsiusTemperature);
    return lowerCelsiusTemperature;
}

float enterUpperCelsiusTemperature() {
    float upperCelsiusTemperature = 0;
    printf("Enter the upper celsius temperature : \n");
    scanf("%f", &upperCelsiusTemperature);
    return upperCelsiusTemperature;
}

float enterStepCalculateFahrenheitTemperatures() {
    float stepTemperatures = 0;
    printf("Enter step to calculate temperature table : \n");
    scanf("%f", &stepTemperatures);
    return stepTemperatures;
}

bool isUpperGreatestOrEqualThanLowerCelsiusTemperatures(float lowerCelsiusTemperature, float upperCelsiusTemperature) {
    bool resultOfCheck;
    if (lowerCelsiusTemperature <= upperCelsiusTemperature) {
        resultOfCheck = true;
    } else {
        resultOfCheck = false;
    }
    return resultOfCheck;
}

bool isStepLessThanCelsiusRangeDifference(float stepTemperatures, float lowerCelsiusTemperature,
                                                                  float upperCelsiusTemperature) {
    bool resultOfCheck;
    float differenceRange = upperCelsiusTemperature - lowerCelsiusTemperature;
    if (stepTemperatures < differenceRange) {
        resultOfCheck = true;
    } else {
        resultOfCheck = false;
    }
    return resultOfCheck;
}

void displayTableTemperatureCelsiusToFahrenheit() {
    float celsius, fahrenheit;
    float lowerCelsiusTemperature = enterLowerCelsiusTemperature();
    float upperCelsiusTemperature = enterUpperCelsiusTemperature();
    float stepTemperatures = enterStepCalculateFahrenheitTemperatures();

    if (isUpperGreatestOrEqualThanLowerCelsiusTemperatures(lowerCelsiusTemperature, upperCelsiusTemperature)
            &&
        isStepLessThanCelsiusRangeDifference(stepTemperatures, lowerCelsiusTemperature, upperCelsiusTemperature)) {
        celsius = lowerCelsiusTemperature;
        while (celsius <= upperCelsiusTemperature) {
            printf("%10.2f", celsius);
            fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
            printf("%10.2f \n", fahrenheit);
            celsius += stepTemperatures;
        }
    } else {
        printf("The entered data is not correct for calculating the temperature table.");
    }
}
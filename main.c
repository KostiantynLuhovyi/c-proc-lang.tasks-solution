//
// Created by LugowoyKonstantin on 20-Aug-19.
//
#include "tasks/displayCelsiusToFahrenheit.c"
#include "tasks/displayFahrenheitToCelsius.c"
#include "tasks/calculateAreaOfCircleThroughRadius.c"
#include "tasks/calculateLengthOfCircleThroughRadius.c"

//todo fix return type value to refactor switch in this function.
void selectTasksSolution() {
    printf("Tasks (1-4): \n");
    printf("Display of temperature table in celsius and the corresponding temperature in fahrenheit. - \"1\"\n");
    printf("Display of temperature table in fahrenheit and the corresponding temperature in celsius. - \"2\"\n");
    printf("Calculate area of the circle. - \"3\"\n");
    printf("Calculate length of the circle. - \"4\"\n");
    printf("Enter the task number to display the solution : \n");
    int selectOfTask = 0;
    scanf("%d", &selectOfTask);
    printf("The solution of the task.\n");
    switch (selectOfTask) { //todo refactor to another function.
        case 1 : displayTableTemperatureCelsiusToFahrenheit(); break;
        case 2 : displayTableTemperatureFahrenheitToCelsius(); break;
        case 3 : calculateAreaOfCircleThroughRadius(); break;
        case 4 : calculateLengthOfCircleThroughCircle(); break;
        default: printf(""); //todo add default text.
    }
}

int main() {

    selectTasksSolution();

}
//
// Created by LugowoyKonstantin on 02-Sep-19.
//

float enterDiameterOfCircle() {
    printf("Enter diameter of the circle : \n");
    float diameterOfCircle = 0.0;
    while (true) {
        scanf("%f", &diameterOfCircle);
        if (isPositiveFloat(diameterOfCircle)) {
            break;
        }
    }
    return diameterOfCircle;
}

void calculateAreaOFCircleThroughDiameter() {
    float diameterOfCircle = enterDiameterOfCircle();
    float areaOfCircle = (PI / 4) * pow(diameterOfCircle, 2);
    printf("The result area of a circle with a diameter of %.3f is : %.3f", diameterOfCircle, areaOfCircle);
}

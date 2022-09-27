#include <stdio.h>

int main () {
    /*Heading*/
    printf("Calculate Tottal Surface Area and Total Volume of the Cylinder\n");

    /*input*/
    float radius, length;
    printf("\n\tEnter Radius of the Cylinder: ");
    scanf("%f", &radius);
    printf("\tEnter Length of Cylinder: ");
    scanf("%f", &length);

    /*Condition*/
    if (radius >= 0 && length >= 0) {
        /*Calculation*/
        float totalSurfaceArea, totalVolume;
        totalSurfaceArea = (2 * 3.14 * radius * length) + (2 * 3.14 * radius * radius);
        totalVolume = 3.14 * radius * radius * length;

        /*output*/
        printf("\n\tTotal Surface Area of the Cylinder = %.2f\n", totalSurfaceArea);
        printf("\tTotal Volume of the Cylinder = %.2F\n", totalVolume);

        return 0;
    } else {
        printf("\n\tInvaild input! Radius and Length must be greater than or equal to 0");
        return 8;
    }

    return 0;

}
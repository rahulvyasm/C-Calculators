#include <stdio.h>

int main () {
    /*Heading*/
    printf("Calculate Tottal Surface Area and Total Volume of the Cylinder");

    /*input*/
    float radius, length;
    printf("\n\tEnter Radius of the Cylinder: ");
    scanf("%f", &radius);
    printf("\tEnter Length of Cylinder: ");
    scanf("%f", &length);

    /*Condition*/
    while (radius < 0 || length < 0) {
        printf("Invaild input! Radius and Length must be greater than or equal to 0\n");
        printf("Please try again.\n");
        printf("\n\tEnter Radius of the Cylinder: ");
        scanf("%f", &radius);
        printf("\tEnter Length of Cylinder: ");
        scanf("%f", &length);
    }
    if (radius >= 0 && length >= 0) {
        /*Calculation*/
        float totalSurfaceArea, totalVolume;
        totalSurfaceArea = (2 * 3.14 * radius * length) + (2 * 3.14 * radius * radius);
        totalVolume = 3.14 * radius * radius * length;

        /*output*/
        printf("\n\tTotal Surface Area of the Cylinder = %.2f\n", totalSurfaceArea);
        printf("\tTotal Volume of the Cylinder = %.2F\n", totalVolume);
        printf("\nCreated by RAHUL VYAS.M");

    } 

    return 0;
}

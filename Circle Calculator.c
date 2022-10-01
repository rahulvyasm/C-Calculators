#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Heading*/
    printf("Calculate Circumference and Area of a Circle\n");

    /*input*/
    float radius;
    printf("\n\tEnter radius of the Circle: ");
    scanf("%f", &radius);

    /*Condition*/
    if(radius > 0) {
        /*Calculation*/
        float cirCumference, area;
        cirCumference = 2 * 3.14 * radius;
        area = 3.14 * radius * radius;

        /*output*/
        printf("\n\tCircumference of the Circle = %.2f", cirCumference);
        printf("\n\tarea of the Circle = %.2f\n", area);
        printf("\nCreated by RAHUL VYAS.M");


    } else { printf("\n\tInvalid Input! Radius must be greater than 0\n");
            printf("\nCreated by RAHUL VYAS.M");}
    return 0;
}

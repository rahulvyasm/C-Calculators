#include <stdio.h>

int main() {

  //Heading and Input
  float i;
  
  printf("Enter ther Number: ");
  scanf("%f", &i);

  // Calculation and Output
  while (i < 0) {
    printf("Invalid input! The number must be greater that or equal to 0\n");
    printf("Please try again: ");
    scanf("%f", &i);
  }
  if (i >= 0) {
    printf("Square of %.2f is = %.2f\n", i , i * i);
    printf("\nCreated by RAHUL VYAS.M");
  } 
}
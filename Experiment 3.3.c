#include <stdio.h>
#include <conio.h>
int main(void) {
    printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
      float weight, height, bmi;
    
    printf("Enter weight in kilograms: ");
    if (scanf("%f", &weight) != 1) {
        printf("Invalid input for weight.\n");
        return 1;
    }
    printf("Enter height in meters: ");
    if (scanf("%f", &height) != 1) {
        printf("Invalid input for height.\n");
        return 1;
    }
    if (height <= 0) {
        printf("Height must be greater than zero.\n");
        return 1;
    }

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi < 25.0) {
        printf("Category: Normal weight\n");
    } else if (bmi < 30.0) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
    getch();
    return 0;
}

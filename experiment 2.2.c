#include <stdio.h>
#include <conio.h>
int main() {
   printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    
    float celsius, fahrenheit;

    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
    
    getch();
    return 0;
}

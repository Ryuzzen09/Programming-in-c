#include <stdio.h>
#include <conio.h>

int main() {
    printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");

    float length, width, area, perimeter;

   
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

   
    area = length * width;
    perimeter = 2 * (length + width);

    
    printf("\nArea of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);
    
    getch();
    return 0;
}

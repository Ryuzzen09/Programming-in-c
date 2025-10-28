#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");

    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3, maxPerimeter;
    int maxRect;

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%f %f", &l1, &b1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%f %f", &l2, &b2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%f %f", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    maxPerimeter = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);
    maxRect = (maxPerimeter == p1) ? 1 : (maxPerimeter == p2) ? 2 : 3;

    printf("\nPerimeter of Rectangle 1 = %.2f", p1);
    printf("\nPerimeter of Rectangle 2 = %.2f", p2);
    printf("\nPerimeter of Rectangle 3 = %.2f", p3);
    printf("\n\nRectangle %d has the highest perimeter = %.2f\n", maxRect, maxPerimeter);
    getch ();
    return 0;
}

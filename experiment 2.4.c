#include <stdio.h>
#include<conio.h>

float squareRoot(float n) {
    float x = n;
    float y = 1;
    float e = 0.000001;  

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
      printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    
    float a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation!\n");
        return 0;
    }

    d = b*b - 4*a*c;  

    if (d > 0) {
        root1 = (-b + squareRoot(d)) / (2*a);
        root2 = (-b - squareRoot(d)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        float realPart = -b / (2*a);
        float imagPart = squareRoot(-d) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    getch();
    return 0;
}

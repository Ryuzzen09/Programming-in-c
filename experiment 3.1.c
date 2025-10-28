#include <stdio.h>
#include <conio.h>
int main() {
   printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    int x;

    
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("%d is Even.\n", x);
    } else {
        printf("%d is Odd.\n", x);
    }
    getch();
    return 0;
}

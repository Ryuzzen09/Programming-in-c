#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    
    float principal, rate, time, amount, compoundInterest;
    int i;

    
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    
    amount = principal;

    
    for (i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100);
    }

     
    compoundInterest = amount - principal;

    
    printf("\nTotal Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", compoundInterest);
    getch();
    return 0;
}

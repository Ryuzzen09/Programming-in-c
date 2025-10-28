#include <stdio.h>
#include <conio.h>
int main() {
    int year, i, leapYears = 0, normalYears = 0, totalDays, day;
    printf("Enter the year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            leapYears++;
        else
            normalYears++;
    }

    totalDays = (leapYears * 366) + (normalYears * 365);

    day = (totalDays % 7);

    printf("\n1st January %d is ", year);

    switch (day) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }
    getch ();
    return 0;
}

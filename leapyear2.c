#include <stdio.h>

int main()
{
    int year;
    printf("Please enter your year\n");
    scanf("%d", &year);

    if((year % 2 == 0) && (year % 4 == 0))
    {
        printf("You have a leap year\n");
    }

    else
    {
        printf("This isnt a leap year\n");
    }

    return 0;
}
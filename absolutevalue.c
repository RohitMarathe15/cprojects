#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, absnum;

    printf("Enter your number\n");
    scanf("%d", &num);

    absnum = abs(num); 

    if(num > 0)
    (
        printf("The absolute value of %d is equal to %d\n", num, num)
    );

    if(num < 0)
    (
        printf("The absolute value of %d is equal to %d\n", num, absnum)
    );

    return 0;
}
#include <stdio.h>
int main()
{
    int i = 1;
    int overtime_pay, hours;

    while(i <=10 )
    {
        printf("Enter total number of hours worked over 40\n");
        scanf("%d", &hours);
        overtime_pay = hours*12;
        printf("Overtime pay is %d\n", overtime_pay);
        i = i +1;
    }
    return 0;
}
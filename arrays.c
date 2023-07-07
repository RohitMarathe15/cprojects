#include <stdio.h>

int main()
{
    int avg;
    int marks[30];
    int sum;
    sum = 0;
    int i;

    for(i=0; i<=29; i = i+1)
    {
        printf("Enter student's marks");
        scanf("%d", &marks[i]);
    }

    for(i=0; i <= 29; i= i+1)
    {
        sum = sum + marks[i];
    }

    avg = sum/30;

    printf("The data's average is %d", avg);




    return 0;


}
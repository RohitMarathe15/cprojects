#include <stdio.h>

int main()
{
    int min;
    int max;
    int numbers[5]={4,6,5,1,8};
    int i;

    max = numbers[0];

    for(i=0; i < 4; i= i+1)
    {
        if(min > numbers[i+1])
        {
            min = numbers[i+1];
        }

        if(max < numbers[i+1])
        {
            max = numbers[i+1];
        }
    }

   

    printf(" minm = %d  max = %d \n", min,max);


    return 0;
}
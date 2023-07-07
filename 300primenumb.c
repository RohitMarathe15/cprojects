#include <stdio.h>

int main()
{
    int i, divide, num;
    num = 2;

    for(i = 2; i < 301; i = i + 1)
    {
       for(num = 2; num <= (i-1); num = num+1)
       {
            if(i % num == 0)
            {
                printf("%d isnt a prime number\n", i);
            }
       }
    }

    return 0;
}
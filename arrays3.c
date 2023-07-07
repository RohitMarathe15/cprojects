#include <stdio.h>

int main()
{
    int numbers[5] = {1,2,3,5,4};
    int temporary;
    int i, x, flag;
    flag = 0;


    for(x = 0; x < 5 ; x=x+1)
    {
        printf("%d\n", x);
       for(i = 0; i < 4; i = i+1)
       {
         if(numbers[i] > numbers[i+1])
         {
            temporary = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i + 1] = temporary;

            flag=1;
         }
       }

        if(flag == 0)
        {
            break;
        }
         flag = 0;
    }

    printf("%d %d %d %d %d\n" ,numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    
    


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int target;
    int counter;
    int temp;
    int matchFound;
    int arraysize;
    int i;
    int arrayvalue;
    int* numbers;


    printf("Enter target value\n");
    scanf("%d", &target);

    printf("Enter your array size\n");
    scanf("%d", &arraysize);

    numbers = (int*) malloc(arraysize * sizeof(int));
    

    for(i = 0; i < arraysize; i= i+ 1)
    {
        printf("Enter value you want in the array");
        scanf("%d", &numbers[i]);
    
    }

    
    matchFound = -1;
    
    for(counter = 0; counter < arraysize; counter = counter + 1)
    {
        temp = numbers[counter] +  numbers[counter + 1];

        printf("%d\n", counter);

        if(temp == target)
        {
            printf("found match %d %d \n ", numbers[counter], numbers[counter + 1] );
            matchFound = 1;
            break;

        }        

    }
    
    free(numbers); 


    if(matchFound == - 1)
    {
        printf("Match not found\n");
    }
    return 0;
}


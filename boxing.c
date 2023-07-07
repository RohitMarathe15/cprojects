#include <stdio.h>

int main()
{
    int weight;

    printf("Enter the weight of the boxer\n");
    scanf("%d", &weight);

    if(weight >= 190)
    {
        printf("Boxer is heavyweight\n");
    }
    else if(weight >= 154)
    {
        printf("Boxer is middleweight\n");
    }
    else if(weight >= 122)
    {
        printf("Boxer is featherweight\n");
    }
    else if(weight >= 115)
    {
        printf("Boxer is bantamweight\n");
    }
    else if(weight < 115)
    {
        printf("Boxer is flyweight\n");
    }


    return 0;
}
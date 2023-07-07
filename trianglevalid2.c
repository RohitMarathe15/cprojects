#include <stdio.h>

int main()
{
    int firstside, secondside, thirdside;

    printf("Enter the three sides of the triangle\n");
    scanf("%d%d%d", &firstside, &secondside, &thirdside);
    
    if(((firstside + secondside) > thirdside) && ((firstside + thirdside) > secondside) && ((secondside + thirdside) > firstside))
    {
        printf("Your triangle is valid\n");
    }

    else
    {
        printf("Your triangle is not valid\n");
    }

    return 0;
}
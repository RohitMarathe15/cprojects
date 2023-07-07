#include <stdio.h>

int main()
{
    int hard, tensile;
    float carbon;
    
    printf("Enter hardness value, tensile strenght and carbon value of steel\n");
    scanf("%d%d%f", &hard, &tensile, &carbon);
 
    if((hard > 50) && (tensile > 5600) && (carbon < 0.7))
    {
        printf("Your steel is grade 10\n");    
    }
    if((hard > 50) && (carbon < 0.7) && (tensile <= 5600))
    {
        printf("Your steel is grade 9\n");
    }
    if((hard <= 50) && (carbon < 0.7) && (tensile > 5600))
    {
        printf("Your steel is grade 8\n");
    }
    if((hard > 50) && (carbon >= 0.7) && (tensile > 5600))
    {
        printf("Your steel is grade 7\n");
    }
    if(((hard > 50) && (tensile <= 5600) && (carbon >= 0.7)) || ((hard <= 50) && (tensile > 5600) && (carbon >= 0.7)) || ((hard <= 50) && (tensile <= 5600) && (carbon >0.7)))
    {
        printf("Your steel grade is 6\n");
    }
    if((hard <= 50) && (carbon >= 0.7) && (tensile <= 5600))
    {
        printf("Your steel value is 5\n");
    }
    return 0;
}
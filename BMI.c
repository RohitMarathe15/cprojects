#include <stdio.h>

int main()
{
    int weight;
    float height, bodymass;

    printf("What is your weight in kilograms?\n");
    scanf("%d", &weight);

    printf("What is your height in meters?\n");
    scanf("%f", &height);

    bodymass = (weight)/(height * height);

    if(bodymass > 40)
    {
        printf("Morbidly obese\n");
    }
    else if(bodymass > 30)
    {
        printf("Obese\n");
    }
    else if(bodymass > 25)
    {
        printf("Overweight\n");
    }
    else if(bodymass > 18.6)
    {
        printf("Ideal weigth\n");
    }
    else if(bodymass > 17.5)
    {
        printf("Underwieght\n");
    }
    else if(bodymass > 15)
    {
        printf("Anaeroxic\n");
    }
    else if(bodymass < 15)
    {
        printf("Starvation\n");
    }
    
    return 0;
}
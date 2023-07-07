#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("Enter values for the three angles\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    
    if((angle1 == 60) && (angle2 == 90) && (angle3 == 90))
    {
        printf("The triangle is an quilateral triangle\n");
    }

    if((angle1 == angle2) || (angle2 == angle3) || (angle1 == angle3))
    {
        printf("The triangle is an isocelles triangle\n");
    }

    if((angle1 == 90) || (angle2 == 90) || (angle3 == 90))
    {
        printf("The triangle is a right triangle\n");
    }

    else
    {
        printf("The triangle is a scalene triangle\n");
    }

    return 0;
}
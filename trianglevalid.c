#include <stdio.h>

int main()
{
    int ang1, ang2, ang3;

    printf("Enter value of angle 1\n");
    scanf("%d", &ang1);
    printf("Enter value of angle 2\n");
    scanf("%d", &ang2);
    printf("Enter value of angle 3\n");
    scanf("%d", &ang3);

    if (ang1 + ang2 + ang3 == 180)
    (
        printf("This triangle is valid\n")
    );

    else
    (
        printf("This triangle is not valid\n")
    );
    
    return 0;
}
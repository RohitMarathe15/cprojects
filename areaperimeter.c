#include <stdio.h>

int main()
{
    int len, width, area, perimeter;

    printf("Enter your rectangle's lenght\n");
    scanf("%d", &len);
    printf("Enter your rectangle's width\n");
    scanf("%d", &width);

    area = len * width;
    perimeter = 2*(len + width);

    if(area > perimeter)
    (
        printf("The area of %d is greater than the perimeter of %d\n", area, perimeter)
    );

    if(area < perimeter)
    (
        printf("The area of %d is less than the perimeter of %d\n", area, perimeter)
    );

    if(area == perimeter)
    (
        printf("The area of %d is equal to the perimeter of %d\n", area, perimeter)
    );

    return 0;
}
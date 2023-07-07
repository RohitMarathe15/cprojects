# include <stdio.h>

int main()
{
    int x, y, r, p, a;
    float c, g;
    
    printf("What is the lenght of the rectangle");
    scanf("%d", &x);
    printf("What is the width of the rectangle");
    scanf("%d", &y);
    printf("What is the radius of the circle");
    scanf("%d", &r);

    p = (x + y)*2;
    a = x*y;
    c = 2*3.14*r;
    g = r*r*3.14;

    printf("The area is equal to %d\n", a);
    printf("The perimeter is equal to %d\n", p);
    printf("The circumference is equal to %f\n", c);
    printf("The area of circle is equal to %f\n", g);


    return 0;
}
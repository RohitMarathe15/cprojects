#include <stdio.h>

int main()
{
    int y;
    float i,x;

    for(y =1; y < 7; y=y+1)
    {
        for(x=5.5; x < 13; x = x+0.5)
        {
            i = 2+(y+(0.5*(x)));

            printf("%f\n %d\n %f\n", i,y,x);
        }
    }

    return 0;
}
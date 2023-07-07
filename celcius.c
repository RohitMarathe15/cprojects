# include <stdio.h>

int main()
{
    float x, y;
    printf("What is temperature in far.");
    scanf("%f", &x);
    
    y = (x - 32)*5/9;
    printf("In centigrade, the temp is %f", y);

    return 0;
    
}
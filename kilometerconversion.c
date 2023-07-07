# include <stdio.h>

int main()
{
    float k, m, n, i, c;
    printf("Enter the distance in kilometers between two cities");
    scanf("%f", &k);

    m = k*1000;
    n = k/1.609;
    i = k*39370;
    c = k*100000;

    printf("The distance in meters, miles, inches and centimeters respectively is %f %f %f %f", m, n, i, c);

    
    return 0;
}
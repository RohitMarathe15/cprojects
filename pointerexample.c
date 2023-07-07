#include <stdio.h>

int main()
{
    int i =3;
    int *j;

    j = &i;

    printf("Adress of i = %u\n", &i);
    printf("Adress of i = %u\n", j);
    printf("Adress of j = %u\n", &j);
    
}
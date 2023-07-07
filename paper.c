#include <stdio.h>

int main()
{
    int len1, width1, len2, width2, len3, width3;

    printf("What is the inital length?\n");
    scanf("%d", &len1);
    printf("What is the initial width\n");
    scanf("%d", &width1);

    len2 = width1/2;
    width2 = len1;

    len3 = width2/2;
    width3= len2;

    printf("The lenght and width of a2 are %d and %d respectively\n", len2, width2);
    printf("The lenght and width of a3 are %d and %d respectively\n", len3, width3);





    return 0;
}
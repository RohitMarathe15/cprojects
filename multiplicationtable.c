#include <stdio.h>

int main()
{
    int i, num, result, total;

    printf("Enter your number\n");
    scanf("%d", &num);

    printf("Enter the highest value you want you number to mulitply to\n");
    scanf("%d", &total);

    for(i = 1; i <= total; i = i + 1)
    {
        result = i*num;
        printf("%d %d  %d\n", num,i,result);
    }

    return 0;
}
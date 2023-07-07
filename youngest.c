# include <stdio.h>

int main()
{
    int ajay, shyam, ram;

    printf("Enter Ajay's age\n");
    scanf("%d", &ajay);
    printf("Enter Shyam's age\n");
    scanf("%d", &shyam);
    printf("Enter Ram's age\n");
    scanf("%d", &ram);

    if(ajay > shyam > ram)
    {
        printf("Ram is the youngest of the three");
    } 
    if(shyam > ajay > ram)
    {
        printf("Ram is the youngest of the three");
    }

    if(shyam > ram > ajay)
    {
        printf("Ajay is the youngest of the three");
    }
    if(ram > shyam > ajay)
    {
        printf("Ajay is the youngest of the three");
    }

    if(ajay > ram > shyam)
    {
        printf("Shyam is the youngest of the three");
    }
    if(ram > ajay > shyam)
    {
        printf("Shyam is the youngest of the three");
    }

    return 0;
}
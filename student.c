#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char another = 'Y';
    struct student
    {
        char name[40];
        int grade;
        float gpa;
    };
    
    struct student s;

    fp = fopen("EMPLOYEE.DAT", "w");
   
    if(fp == NULL)
    {
        puts("Can't open file");
        exit(1);
    }

    while(fscanf(fp,"%s%d%f", s.name, &s.grade, &s.gpa) != EOF)
    {
        printf("%s%d%f\n", s.name, s.grade, s.gpa);
    }

    fclose(fp);

    return 0;
}
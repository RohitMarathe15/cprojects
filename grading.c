# include <stdio.h>

int main()
{
    int math_score, e, p, h, b, a;
    float z;
    printf("What's the student's math score out of 100?");
    scanf("%d", &math_score);
    printf("What is the student's english score out of 100?");
    scanf("%d", &e);
    printf("What is the student's physics score out of 100?");
    scanf("%d", &p);
    printf("What is the student's history score out of 100?");
    scanf("%d", &h);
    printf("What is the student's biology score out of 100?");
    scanf("%d", &b);

    a = math_score+e+p+h+b;
    z = ((math_score+e+p+h+b)*100)/500;

    printf("The student's aggragate score is %d out of 500\n", a);
    printf("The student's percentage score is %f %% ", z);


    return 0;
}


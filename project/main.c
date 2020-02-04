#include <stdio.h>

int main()
{
    float b,e,m,s,h,a,f,p;

    printf("Enter your marks in Bangla: ");
    scanf("%f",&b);
    printf("Enter your marks in English: ");
    scanf("%f",&e);
    printf("Enter your marks in Mathematics: ");
    scanf("%f",&m);
    printf("Enter your marks in Science: ");
    scanf("%f",&s);
    printf("Enter your marks in History: ");
    scanf("%f",&h);

    printf("\nEnter the full marks of the exam: ");
    scanf("%f",&f);

    a=(b+e+m+s+h)/5;
    p= (a*100)/f;

    printf("\n\n\t\tyour average is: %.2f",a);
    printf("\n\t\tAnd you have obtained %.2f percent of the full marks",p);

    getch();
}

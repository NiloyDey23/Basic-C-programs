#include <stdio.h>

int main()
{
    float b,e,m,s,h,a;

    printf("Enter your marks in Bangla: ");
    scanf("%f",&b);
    printf("Enter your marks in English: ");
    scanf("%f",&e);
    printf("Enter your marks in Mathematics: ");
    scanf("%f",&m);
    printf("Enter your marks in Science: ");
    scanf("%f",&s);
    printf("Enter your marks in Religion: ");
    scanf("%f",&h);

    a=(b+e+m+s+h)/5;




    printf("\nYour average is: %.2f",a);

    if (a>100)
    {
        printf("\n\nWrong Entries!!!");
    }

    else if(a>=80)
    {
        printf("\n\n\tAnd you've got A+");
    }
    else if( a>=70)
    {
        printf("\n\n\tAnd you've got A");

    }
    else if(a>=60)
    {
        printf("\n\n And you've got A-");
    }
    else if(a>=50)
    {
        printf("\n\n  And you've got B");
    }
    else if(a>=40)
    {
        printf("\n\n And you've got C");
    }
    else
    {
        printf("\n\n\n Sorry, you've failed");
    }

    getch();
}

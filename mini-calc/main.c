#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float a,b,c;
    printf("\t\t\tWelcome!\n");
    printf("\tWhat do you want to be calculated???\n\t a.Addition \n\t  b.Subtraction \n\t   c.Multiplication \n\t    d.Division \n\n");
    printf("\t\t\tEnter your choice\n\n");
    scanf("%c",&ch);
     switch(ch)
     {
        case 'a' :
        printf("\n\tEnter 2 numbers for Addition:\n\n");
        scanf("%f %f",&a,&b);
        c=a+b;

        printf("\tThe result is: %.2f",c);

        break;

        case 'b':
            printf("\n\tEnter 2 numbers for subtraction: \n\n");
            scanf("%f %f", &a ,&b);
            c=a-b;
            printf("\tThe result is: %.2f",c);
            break;

        case 'c':
            printf("\n\tEnter 2 numbers for multiplication: \n\n");
            scanf("%f %f", &a,&b);
            c=a*b;
            printf("\tThe result is: %.2f",c);

            break;
        case 'd':
            printf("\n\tEnter 2 numbers for division: \n\n");
            scanf("%f %f", &a, &b);
            c=a/b;
            printf("\tThe result is: %.2f",c);
            break;


     }
     getch();
    return 0;
}

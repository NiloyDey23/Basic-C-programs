#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

int main()
{

float a,b,c,pi;
char ch;

pi = 3.1416;

printf("which area Do you want to calculate?  a.rectangle  b.circle c.triangle");

       ch = getch();
       ch = toupper(ch);

       while((ch != 'b') && (ch != 'c'))
       {

           printf("\n Enter the first value:");
           scanf("%f", &a);
           printf("\n Enter the second value:");
           scanf("%f", &b);
           c=a*b;
           printf("\n the area of the rectangle is: %f",c);

           getch();
       }



getch();
}

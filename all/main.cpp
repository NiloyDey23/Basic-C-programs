#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    printf("what do you want??\n a.calculating areas \n b.calculating division \n c.multiplying words ");

    ch=getch();
    switch (ch)
    {case 'a' :
        {   char ch;
    printf("which area do you want to calculate?  a.circle  b.rectangle c.triangle\n ");
    ch=getche();
    switch(ch)
{case 'a':
        printf("Enter the value of radius:");
        scanf("%f",&x);
        y= pi*(x*x);
        printf("the area of the circle is: %f",y);
break;
case'b':
        printf("Enter the first value:");
        scanf("%f",&x);
        printf("Enter the second value:");
        scanf("%f",&y);
        z=x*y;
        printf("the area is: %f",z);
break;
case'c':
        printf("Enter the height: ");
        scanf("%f",&x);
        printf("Enter the width: ");
        scanf("%f",&y);
        z= 0.5*(x*y);
        printf("the area is: %f",z);

}



}


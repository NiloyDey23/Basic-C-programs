#include <stdio.h>
#include <math.h>
#include <conio.h>
float x,y,z;
#define pi 3.141592654
int main(void)
{   char c;
    printf("\t\t\tWHICH AREA DO YOU WANT TO BE CALCULATED?\n\ntype 'a' for circle  \ntype 'b' for rectangle \ntype 'c' for triangle\n");
    c=getch();
    switch(c)
{case 'a':
        printf("\nEnter the value of radius:\n");
        scanf("%f",&x);
        y= pi*(x*x);
        printf("the area of the circle is: %f",y);
break;
case'b':
        printf("\nEnter the first value:\n");
        scanf("%f",&x);
        printf("Enter the second value:\n");
        scanf("%f",&y);
        z=x*y;
        printf("\nthe area of the rectangle is: %f",z);
break;
case'c':
        printf("\nEnter the height: \n");
        scanf("%f",&x);
        printf("Enter the width: \n");
        scanf("%f",&y);
        z= 0.5*(x*y);
        printf("\nthe area of the triangle: %f",z);

}
    getch();
}

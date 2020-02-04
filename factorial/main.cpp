#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int i,a,b;

    printf("Enter the number:");
    scanf("%d",a);
    for(i=1;i<=10;i++)
    {
        b=a*i;
        printf("the factorial of %d is %d",a,b);
    }
    getch();
}

#include <stdio.h>

int main()
{
    int a,i,j;
    printf("Enter the number: ");
    scanf("%d",&a);


    for(i=1;i<=50;i++)
    {
        j=a*i;

        printf("\n %d * %d = %d", a, i, j );
    }

    getch();
}

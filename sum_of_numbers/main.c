#include <stdio.h>

int main()
{
    int a,s,i,b=0;
    printf("Enter the last natural number: \n");
    scanf("%d", &a);

    for(i=1 ; i <=a ;++i)
    {
        b += i;
        s=b;

    }
    printf("The summation is: %d", s);

    return 0;
}

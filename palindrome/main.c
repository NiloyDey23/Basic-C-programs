#include <stdio.h>

int main()
{
    int n,rev=0,a=0,r;
    printf("Enter the number: \n");
    scanf("%d",&n);
    a=n;

    do
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    while(a!=0);


    if(n==rev)
    {
        printf("\n%d is a palindrome number",n);
    }

    else
    {
        printf("\n%d is not a palindrome number",n);
    }


    return 0;
}

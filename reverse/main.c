#include<stdio.h>

int main()
{
    int num,rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
        rev=num%10;
        num=num/10;
        printf("%d",rev);
    }
    while(num!=0);
    return 0;
}

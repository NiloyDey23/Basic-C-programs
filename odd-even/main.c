#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number: \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an even number",a);
    }
    else
    {
        printf("%d is an odd number",a);
    }
    return 0;
}

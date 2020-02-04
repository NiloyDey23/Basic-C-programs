#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=0;
    printf("Enter the numbers\n");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        ++a;
    }
    printf("digit: %d",a);
    return 0;
}

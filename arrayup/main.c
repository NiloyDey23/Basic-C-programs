#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[100], n,a;
    printf("Enter the number of arrays\n");
    scanf("%d",&n);

    printf("Enter the numbers: ");
    for(a=0;a<n;a++)
    {
        scanf("%d", &ar[a]);
    }
    printf("\nThe numbers are: ");
    for(a=0;a<n;a++)
    {
        printf("\n%d",ar[a]);
    }
    printf("\nThe numbers in reverse are: ");
    for(a=n-1;a>=0;a--)
    {
        printf("\n %d", ar[a]);
    }
    return 0;
}

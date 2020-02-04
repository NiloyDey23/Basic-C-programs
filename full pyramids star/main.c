#include <stdio.h>


int main()
{
    int s,r,i;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for(i=1;i<=r;++i)
    {
        for(s=1;s<=r-i;++s)
        {
            printf(" ");
        }

        for(s=1;s<=i*2-1; ++s)
        {
            printf("*");
        }

    printf("\n");

    }
    return 0;
}

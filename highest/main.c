#include <stdio.h>


int main()
{
    int ar[100], b, c, l, h;

    printf("Enter the number of entries: ");
    scanf("%d", &b);

    if(b<=100 && b>0)
    {
        printf("\nEnter the numbers: \n");

        for(c=0; c<b; c++)
        {
            scanf("%d", &ar[c]);
            l=ar[0];
            h=ar[0];
        }

        for(c=0;c<b;c++)
        {
            if(l>ar[c])
            {
                l=ar[c];
            }

        }
        for(c=0;c<b;c++)
        {
            if(h<ar[c])
            {
                h=ar[c];
            }
        }
        printf("\nThe lowest number is %d", l);
        printf("\nand the highest number is %d", h);
    }
    else
    {
        printf("\nWrong entry!!! type between (1-100)");
    }

    return 0;
}

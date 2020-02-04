#include <stdio.h>

int main()
{
    int a, b;
    float n[500], s=0.0 , avr;

    printf("Enter the numbers of the entries: ");
    scanf("%d", &a);

    if(a<=500 && a>0)
    {
        for(b=1;b<=a;b++)
        {
            if(b==1)
            {
                printf("Enter the 1st number: ");
                scanf("%f", &n[b]);
            }
            else if (b==2)
            {
                printf("Enter the 2nd number: ");
                scanf("%f", &n[b]);
            }
            else if (b==3)
            {
                printf("Enter the 3rd number: ");
                scanf("%f", &n[b]);
            }

            else
            {
                printf("Enter the %dth number: ", b);
                scanf("%f", &n[b]);
            }
            s += n[b];
            avr= s/a;

        }


        printf("\n\tThe summation is %.2f", s);
        printf("\n\tAnd the average is %.2f\n\n\n", avr);
    }
    else
    {
        printf("\nWrong Entry. \nPlease enter again (1-500)\n");
    }

    return 0;
}

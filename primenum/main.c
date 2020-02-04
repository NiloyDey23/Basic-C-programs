#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, n=1;
    printf("Enter the number: \n");
    scanf(" %d",&a);



    for (i=2; i<a ; ++i)
           {
               if(a%i==0)
                {
                    n=2;
                }
                }


           if(n==1)
           {
               printf("\n%d  is a Prime number",a);
           }
           else
           {
               printf("\n%d  is a non-prime number",a);
           }


           getch();


    return 0;
}

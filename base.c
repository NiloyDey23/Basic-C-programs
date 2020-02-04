#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,c;

    scanf("%o", &a);

    n=a;
    while(n>0)
    {
        b=n%8;
        if(b==0||b==1||b==2||b==3||b==4||b==5||b==6||b==7)
        {
             n=n/10;

        }
        else{
            printf("not octal");
            return -1;
        }


    }

    printf("%x", a);
}

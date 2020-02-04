#include <stdio.h>


int a;

int main()
{


    for(a=1;a<=50;a++)
    {
        if(a%10!=0 || a==50)
        {
            printf("%d\n",a);
        }
    }

    dual();
}

void dual()
{
    float b;

    b=12.35;
    printf("%f",b);
}

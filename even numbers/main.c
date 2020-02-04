#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=150; a<=200; a++)
    {
        if(a%2==0)
        {
            printf("%d\n", a);
        }
    }
    getch();
    return 0;
}

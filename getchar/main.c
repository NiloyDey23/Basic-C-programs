#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Type anything\n");
    scanf("%c",&a);

    if(a>= '0' && a<= '9')
    {
        printf("\n %c is a digit",a);
    }

    else if (a >= 'a' && a <= 'z')
    {
        printf("\n %c is an alphabet",a);
    }


    return 0;
}

#include <stdio.h>


int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("the size of the integer is: %d\n", sizeof(i));
    printf("the size of the float is: %d\n", sizeof(f));
    printf("the size of the double is: %d\n", sizeof(d));
    printf("the size of the character is: %d\n", sizeof(c));

    getch();
    return 0;
}

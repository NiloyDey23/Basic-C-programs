#include <stdio.h>
int main()
{
    char d[1000], i;

    printf("Enter a string: ");
    scanf("%s", &d);

    for(i = 0; d[i] != '\0'; ++i);

    printf("Length of the number is: %d", i);
    return 0;
}

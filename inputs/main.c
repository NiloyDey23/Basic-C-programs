#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float f;
    char c[100];

    scanf(" %d", &i);
    scanf(" %f", &f);
    scanf(" %s", &c);

    printf("\n integer= %d \n float= %llf \n character= %s ", i, f, c);
    return 0;
}

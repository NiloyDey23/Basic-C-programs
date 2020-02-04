#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
    int i;
    char a[50];
    printf("Enter the word:");
    scanf("%s",a);
    for(i=0;i<=100;i++)
        printf("%s\t",a);
    getch();
}

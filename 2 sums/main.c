#include <stdio.h>


int main()
{
    int ar[3];
    printf("Enter the numbers: \n");

    scanf("%d", &ar[0]);
    scanf("%d", &ar[1]);

    ar[2]=ar[0]+ar[1];

    printf("%d", ar[2]);
    getch();

}

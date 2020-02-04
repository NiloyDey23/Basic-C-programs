#include <stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if (a%5==0)
        printf("you CAN divide %d by 5",a);
    else
        printf("YOU CANNOT divide %d by 5",a);
    getch();
}

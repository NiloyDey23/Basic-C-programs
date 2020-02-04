#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char ans;
    printf("who are you?\n\n");
    getch();
    printf("Enter your name\n\n");
    scanf("%s", name);
    name[0]= 'u';
    printf(" \t\tDID YOU SAY %s ??\n\n\n\n  press 'Y' to confirm \n\n or press 'N' to enter the name again ", name);
    ans=getch();
    switch(ans)
    {
        case 'y':
        printf("\n\n What a weird name!!!");

    break;
    case 'n':
        printf("\n\nthen Enter your name again\n\n");
        scanf("%s", name);
        name[1]= 'r';
        printf("\n\n\n\n DID YOU SAY %s??\n\n\n\n press 'Y' again to confirm \n\n or press 'N' to enter the name again" , name);

         ans=getch();
    switch(ans)

    {
        case 'y':
        printf("\n\n What a weird name again!!!");

    break;
    case 'n':
        printf("\n\nthen Enter your name again\n\n");
        scanf("%s", name);
        name[2]= 'p';
        printf("\n\n\n\n DID YOU SAY %s??\n\n\n\n press 'Y' again to confirm \n\n or press 'N' to enter the name again" , name);
        ans=getch();
    switch(ans)
    {
        case 'y':
        printf("\n\n What a weird name!!!");

    break;
    case 'n':
        printf("\n\nthen Enter your name again\n\n");
        scanf("%s", name);
        name[4]= 't';
        printf("\n\n\n\n DID YOU SAY %s??" , name);

        break;
    case 'z':
        printf("are you drunk??");


    }
            break;
    case 'z':
        printf("are you drunk??");
    }
            break;
    case 'z':
        printf("are you drunk??");
    }

    getch();
}



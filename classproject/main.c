#include <stdio.h>
#include <stdlib.h>

int main()           //main body
{
    char ch;
    int play_num;
    printf("\t\t\t\t\t\tWelcome to the quiz\n");

    printf("\n\t\t\t\n\tpress 's' to play the game  \n");
    printf("\n\t\t\t\n\tpress 'h' to view highest score  \n");
    printf("\n\t\t\t\n\tpress 's' to play the game  \n");
    scanf("%c", &ch);
    putch('\a');
    switch(ch)     //for switching mode
    {
    case 'a':
        game_1();

        break;
    case 'b':
        printf("\nEnter the number of question:");

    }
}

int game_1()                                    //* start and play mode
{
    int num,i;
    char name[10];
    char ques[20];
    char ans [20];
    int point[10];

    printf("Enter the number of players [max 5 players]: ");
    scanf("%d", &num);

    for (i=0; i<num ;i++)
    {
        printf("Enter player %d name: ",i+1);
        scanf("%s", &name[i]);
    }



}

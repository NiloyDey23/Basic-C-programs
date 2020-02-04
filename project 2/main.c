#include<stdio.h>
#include<conio.h>

int main()

{
    char n[16];
    printf("enter your name: ");
    scanf("%s",n);


    char id [13];
    printf("enter your ID: ");
    scanf("%s",id);


    char dept [10];
    printf("enter your department: ");
    scanf("%s", dept);


    char sec[10];
    printf("Enter your section: ");
    scanf("%s",sec);



    char age[10];
    printf("enter your age: ");
    scanf("%s",age);


    char cg[10];
    printf("enter your CGPA: ");
    scanf("%s",cg);



    printf("\n\n\t Name: %s\n",n);
    printf("\t Id: %s\n",id);
    printf("\t Department: %s\n", dept);
    printf("\t Section: %s\n",sec);
    printf("\t Age: %s\n",age);
    printf("\t CGPA:%s\n",cg);

    getch ();

    return 0;
}

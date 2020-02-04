#include<stdio.h>
#include<conio.h>

int main(){

int a,p=0,h=0,i,counter=1;
int yn;


for(i=1; ; i++){
        if(counter == 1){
            printf("**************Welcome to the Daffodil Quiz Competition , for choose correct ans just press 1/2/3/4************* \n \n");
        }
//****************************************** 1
        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;

//****************************************** 2
        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;
//****************************************** 3

       printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;
//****************************************** 4

        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;
//****************************************** 5
        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n",p);
        counter++;
//****************************************** 6
        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;
//****************************************** 7

       printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;
//****************************************** 8

        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;
//****************************************** 9
        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);
        counter++;
//****************************************** 10

        printf("   *********************************************** \n");
        printf("%d) * What is the capital of bangladesh ?           * \n",counter);
        printf("   * 1)dhaka 2) Barishal 3)Noakhali 4)Kustia       *\n");
        printf("   *********************************************** \n");
        printf("    Ans Is : ");
        scanf("%d",&a);
        if(a == 1){
            p = p+10;
        }
        else{
            p = p-10;
        }
        printf("  Total point is %d \n \n",p);


//****************************************** 11


        if(p > h){
            h=p;
        }
        printf(" Highest Number is %d \n",h);

        if(counter == 10){
            printf("You want to play again? (press 1 for yes and 2 for no) \n \n");
            scanf("%d",&yn);
            counter=1;
            p=0;


            if(yn == 2){
                 printf("Thank you for play this game,See you next time  ");
                break;
            }else{
                printf("************************************************* \n");
                printf("************************************************* \n");

            }

        }
}
return 0;
}

#include<stdio.h>

int main()
{

    int i, j=0;
    char ques[10]= {'a','b','c','d','e','f','g','h','i','j'} ;
    int right[10]={1,2,3,4,5,6,7,8,9,10};
    char ans, name;

    printf("Enter the name\n");
    scanf("%s", &name);

    for(i=0;i=10;i++)
    {
        printf("%s", &ques[i]);
        scanf("%d",&ans);

        if(ans==right[i])
        {
            j++;
        }

    }


}

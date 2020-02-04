#include<stdio.h>
int main()
{
    int i,n;
    int ar[100];
    int e,in;

printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    printf("Enter the elements in array \n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Input array elements \n");
    for(i=0;i<n;i++){
        printf("\n%d",ar[i]);
    }
     printf("\nEnter a element which you want to find\n ");
    scanf("%d",&e);
    for(i=0;i<n;i++){
        if(e==ar[i]){
            in=i;
            printf("\nIndex is %d",in+1);

}


    }


    return 0;
}

#include<stdio.h>

int main()
{
    int a[5],i,n,max,min;
    printf("enter number of list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter any number: ");
        scanf("%d",&a[i]);
    }
     max=a[0];

    for(i=0;i<n;i++)

{
    if(a[i]>max);
{
   max=a[i];

}

}
   min=a[0];

    for(i=0;i<n;i++)

{
    if(a[i]<min)
{
   min=a[i];

}
}
 printf("max is %d\n",max);
 printf("min is %d",min);
    return 0;
}

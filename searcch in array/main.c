#include<stdio.h>

int main()
{
   int array[50], s, c, n;

   printf("Enter the number of elements in array\n");
   scanf("%d",&n);

   printf("Enter %d integer\n", n);

   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
   }


   printf("Enter the number of elements:\n");
   scanf("%d", &s);

   for (c = 0; c < n; c++)
   {
      if (array[c] == s)
      {
         printf("%d is present at location %d.\n", s, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", s);

   return 0;
}

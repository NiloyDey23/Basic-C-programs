#include<stdio.h>
int main()
{
   char a;
   printf("Enter a character: ");
   scanf("%c", &a);

   switch(a)
   {
       case 'a':
      printf("%c is a vowel\n", a);
      break;
   case'e':
      printf("%c is a vowel\n", a);
   break;
   case'i':
      printf("%c is a vowel\n", a);
   break;
   case 'o':
      printf("%c is a vowel\n", a);
  break;
   case'u':
      printf("%c is a vowel\n", a);
   break;
   default:
      printf("%c is a consonant\n", a);
   }
   return 0;
}



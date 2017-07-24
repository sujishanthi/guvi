#include <stdio.h>
#include <string.h>
void main()
{
   char str[100];
   int i = 0, l = 0, s = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(i = 0; str[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
   for(i = 0; i <= l-1; i++)
   {
      if(str[i] == ' ')
      {
    s = s + 1;
      }
   }
   printf("The number of words in the string are %d", s);
}

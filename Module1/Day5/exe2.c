#include <stdio.h>

int stringToInt(char *str)
{
   int res = 0;

   for (int i = 0; str[i] != '\0'; i++)
   {
      int ival = str[i] - '0';

      res = res * 10 + ival;
   }

   return res;
}

int main()
{
   char str[100];

   printf("\n\t Enter a string of digits:  ");
   scanf("%s", str);

   int Result = stringToInt(str);

   printf("String: %s\n", str);
   printf("Integer: %d\n", Result);

   return 0;
}
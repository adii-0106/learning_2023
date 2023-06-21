#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char times_string[9];

   char *token;
   unsigned long hours, minutes, seconds;
   unsigned long total_Seconds;

   printf("Enter the time (hh:mm:ss):  ");
   scanf("%s", times_string);

   token = strtok(times_string, ":");
   hours = strtoul(token, NULL, 10);

   token = strtok(NULL, ":");
   minutes = strtoul(token, NULL, 10);

   token = strtok(NULL, ":");
   seconds = strtoul(token, NULL, 10);

   total_Seconds = (hours * 3600) + (minutes * 60) + seconds;

   printf("\n\tTotal seconds: %lu\n", total_Seconds);

   return 0;
}
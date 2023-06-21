#include <stdio.h>
#include<string.h>
#include <ctype.h>

void toggleCase(char str[]) {
    int i = 0;
    
    while (str[i] != '\0') 
    {
        if (islower(str[i])) 
        {
            str[i] = toupper(str[i]);    
        }
        
         else if (isupper(str[i])) 
         {
            str[i] = tolower(str[i]);

        }
        i++;
    }
}

int main() 
{
    char str[50];
    //for(int i=0;i<2;i++)
    //{

    printf("Enter a string:  ");
    gets(str);
    
    toggleCase(str);
    

    printf("\n \t Toggled case string: %s\n", str);
   // }

    return 0;
}
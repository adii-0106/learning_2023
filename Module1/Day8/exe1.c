#include <stdio.h>


int main() 
{
    FILE *Source_File, *Target_File;
    char source_Path[100], target_Path[100];
    char ch;

    printf("\n\t Please enter the path of the source file: ");
    scanf("%s", source_Path);

    printf("\n\t Please enter the path of the target file: ");
    scanf("%s", target_Path);

    // Openings the source file in the read mode to read..

    Source_File = fopen(source_Path, "rb");
    if (Source_File == NULL) {
        printf("\n\t Failed to open the source file.\n");
        return 1;
    }

    // Opening the targeted file in write mode to wrrite..

    Target_File = fopen(target_Path, "wb");

    if (Target_File == NULL) {
        printf("\n\t Failed to create the target file.\n");
        fclose(Source_File);
        return 1;
    }

    // Copying the contents of the source file to the targeted file 

    while ((ch = fgetc(Source_File)) != EOF) {
        fputc(ch, Target_File);
    }

    printf(" \n\t The File copied successfully....\n");


    fclose(Source_File);

    fclose(Target_File);

    return 0;
}

#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc , char **argv) 
{ 
    char name[30]; 
    
    strncpy(name, argv[0], sizeof(name));
    

    if(!strcmp(name, "./upper"))
    {
        for (int i = 1; i < argc; i++)
        {
            for (int c = 0; c < strlen(argv[i]); c++)
            {
                putchar(toupper(argv[i][c]));
            }
            printf(" ");
        }
    }
    if(!strcmp(name, "./lower"))
    {
        for (int i = 1; i < argc; i++)
        {
            for (int c = 0; c < strlen(argv[i]); c++)
            {
                putchar(tolower(argv[i][c]));
            }
            printf(" ");
        }
    }
    if(!strcmp(name, "./generatePass"))
    {
        for (int i = 1; i < argc; i++)
        {
            putchar(argv[i][0]);
        }
    }
        if(!strcmp(name, "./pali"))
    {
        for (int i = 1; i < argc; i++)
        {
            for (int c = 0; c < strlen(argv[i]); c++)
            {
                putchar(argv[i][c]);
            }

            for (int t = strlen(argv[i]); 0 <= t ; t--)
            {
                putchar((argv[i][t]));
            }
            printf(" ");
        }
    }
    
return 0; 
}
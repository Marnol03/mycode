#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>
#include <inttypes.h>

int toupper(int c);

int main(int argc, char *argv[])
{
    char Nom [10];
    char reste [100];
    int v=-2, t=1;
    

    strncpy(Nom, argv[0], sizeof(Nom));
   
    while (t < argc)
    {   
        
        strncpy(&reste[v+2], argv[t], sizeof(reste));
        printf(" le reste est : %s\n", reste);
        reste[v+1]= ' ';
        v++;
        v +=strlen(argv[t]);
        t++;
    }
    printf("je pars:\n");
    printf(" le reste est : %s\n", reste);

    int c = atoi(reste);
    printf("die Antwort :%i", c);
    if(!strcmp(Nom, "upper"))
    {
        toupper(c);
        
    }
    printf("die Antwort :%i", c);

    return 0;
}
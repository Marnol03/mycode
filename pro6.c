#include    <stdio.h>
#include    <stdlib.h>
int main(int argc, char * argv []) 
{
        char   c1;
    char c2; /* zuletzt gelesen */ int input;
    c2 = '\n'; /* Leerzeile am Anfang? */
        /* Zeichen lesen bis EOF */
        while ((input = getchar()) != EOF) {
            c1 = (char)input;
            printf(" voici '%c'\t", c1);
            /* auf doppeltes LF pruefen */
            if (c1 == '\n' && c2 == '\n')
                continue;
            /* Sonst das Zeichen wegschreiben */
            putchar(c1);
            c2 = c1; 
        }
        /* Zum Schluss noch das letzte Zeichen */
        /* wegschreiben */
        if (c1 != '\n' || c2 != '\n')
            putchar (c1);
    return (0); 
}
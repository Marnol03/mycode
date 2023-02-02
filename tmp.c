#include <stdio.h>
#include <stdbool.h>
bool argcheck(char * arg) {
       char * cp;
    for (cp = arg; *cp != '\0'; cp++) 
    {
        if (*cp < 'a' || *cp > 'z') 
        { /* ungueltiges Zeichen? */
            return false;
        } 
    }
return true;
}
bool alleda(char * ref, char c) 
{

    char * cp;

    for (cp = ref; *cp != '\0'; cp++) 
    { /* Referenzwort nach dem Buchstaben absuchen */
        if (*cp == c) 
        {
            *cp = ' '; /* als gefunden markieren durch Blank */
        }
    }
    /* Sind alle Buchstaben nun gefunden? */
    for (cp = ref; *cp != '\0'; cp++) 
        {
        if (*cp != ' ') 
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char * argv[]) {
    char c;

    if (argc != 2) 
    {
        printf("Das Programm muss genau einen Aufrufparameter");
        return 22;
    }
    if (!argcheck(argv[1])) 
    {
        printf("Der Aufrufparameter muss aus Kleinbuchstaben zwischen 'a' und 'z' bestehen\n");
        return 22;
    }
    printf("Geben Sie so lange Buchstaben ein, bis alle Buchstaben\n");
    printf("des Referenzworts %s enthalten sind: ", argv[1]);
    
    do 
    {
        c = (char)getchar();
    } while (!alleda(argv[1], c));
    printf ("BINGO!\n");
    return 0; 
}

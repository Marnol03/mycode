#include<stdio.h>
#include<string.h>

void Mafonction(char * find, char * word, char *subst)

{
    int lword=strlen(word), lfind=strlen(find),lsubst=strlen(subst),j;

    if(strstr(word, find))
    {
            for (int i = 0; i < lword; i++)
        {
            if (!strcmp(word[i], find[j]))
            {
                
            }
            
        }
    }
    else
    {
        printf("|%s| ne se trouve pas dans |%s|", find, word);
    }
    
}

int main()
{


    return 0;
}
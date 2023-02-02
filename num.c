#include<stdio.h>
#include<string.h>


int main(int argc, char* argv[])
{
    char Name[20], Satz[1024], result[20];
    char p = '\0';
    int counter, help = 0;
    

    strncpy(Name, argv[1], sizeof(Name));
    printf("\n le mot est : %s", Name);
  
    printf("\n Geben sie bitte einen Satz ein : ");
        
    
    do 
    { 
        
        int hp = 0, v = 0;
        do
        {
            p = getchar();
            Satz[hp]= p;
            printf("\n la phrase est : %s", Satz);
            hp++;
        }while (p != '\n'); 
        for (int i = 0; i < strlen(Name); i++)
        {
            counter = 0;
            for (int t = 0; t < strlen(Satz); t++)
            {
                if (Name[i]== Satz[t])
                {
                    counter++;
                    //printf("\n le compteur est : %i", counter);
                }
                
            }
            if (counter != 0)
            {
                result[v]= Name[i];
                printf("\n le resultat est : %s", result);
                v++;
            }
            
        }
        printf("\n le resultat est : %s", result);
        if (!strcmp(result, argv[1]))
        {
            printf("\n BINGO!!!!!!");
            help++;
        }
    }while(help == 0);
    
    return 0;
}
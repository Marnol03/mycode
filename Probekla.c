#include <stdio.h>
#include<string.h>

int main(int argc, char * argv[])
{
    char Test [1000], Man [1000];
    char mein;
    int counter, t = 1,v = -1; 

    printf("l ladresse de man est %p \n", &Man);
    strncpy(Test, argv[0], sizeof(Test));
    printf("le nom du Program est |%s|\n il possede |%i| nombres delements.\n", Test, argc-1);

    do
    {
       
        strncpy(&Man[v+1], argv[t], sizeof(Man));
        v += strlen(argv[t]);
        t++;
    } while (t < argc);
    
    
        
    printf("\net le mot est %s\n",Man);

    for ( mein ='a'; mein <='z'; mein++)
    {
        counter = 0;

        for (int i = 0; i < strlen(Man) ; i++)
        {
            if (mein == Man[i])
            {
                counter++;
            }
            
        }
        
        printf("Vorkommen %c : %i mal.\n", mein, counter);
    }
    


    return 0;
}
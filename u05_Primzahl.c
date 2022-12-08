/*Name : Saddefo takoukam Marc
*Datum: 09.11.2022
*Beschreibung: das Program gibt die PrimaZahlen ein ,die inzwischen  1 und 10000 sind
*/
#include<stdio.h>
#include<stdbool.h>

bool isPrim(int NutzerInput) //mit der Funktion isPrim controllieren wir ob die Zahl Prima oder nicht.
{
    static int teiler = 2;
    if(teiler == NutzerInput)
    {
        teiler = 2;
        return true;
    }
    if(NutzerInput % teiler ==0)
    {
        teiler = 2;
        return false;
    }
    if(teiler<NutzerInput)
    {
        teiler ++;
        return isPrim(NutzerInput);
    }
    teiler = 2;
    return false;
}

int PFZ(int T)
{
    static int R,teiler = 2;
    R = T%teiler;
    if (isPrim(teiler)== true && R== 0)
    {
        return printf("%i * ",teiler)* PFZ(T/=teiler);
    }
    if(teiler<=T)
    {
        teiler ++;
        return PFZ(T);
    }
    return 0;
}

int main()
{
    int counter,T,max = 10, Primazahl1,Primazahl2;


    printf("die PrimaZahlen sind : ");
    for (counter = 2; counter < max; counter++)
    {
        if(isPrim(counter)== true) // mit der Bedigung if werden wir die Primazahlen in paare ausgeben
        {
            Primazahl1=counter;
            if(isPrim(counter+2)== true)
            {
                Primazahl2=counter+2;
               printf("(%i %i )\n",Primazahl1,Primazahl2); 
            }
        
        }
        
        else continue;
    
    }   
    printf("Geben Sie eine natuerliche Zahl ein :");
    scanf("%i", &T);
    PFZ(T);
    printf("\n");
    
    return 0;
}
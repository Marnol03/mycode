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

int doPZF(int pruef)
{

}

int main()
{
    int counter, NutzerInput,max = 10000, Primazahl1,Primazahl2;


    printf("die PrimaZahlen sind : ");
    for (counter = 2; counter < max; counter++)
    {
        if(isPrim(counter)== true) // mit der Bedigung if werden wir die Primazahlen in paare ausgeben
        {
            
            if(isPrim(counter+2)== true)
            {
               printf("(%i %i )",counter,counter+2); 
            }
        
        }
        
        else continue;
    
    }
    if(isPrim(counter)== true)
    {
        printf("Die Zahl %i hat die Primfaktoren", counter);
    }
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct Kurverwalt 
{
    int AnzahlderGaeste;
    double Temp;
    char TitelEvent[100];
}Game;

void affichage(Game *p,  int laenge)
{
    int j = 1;
    laenge = 12;
    for ( int i = 0; i < laenge; i++)
    {
        printf("Monat %i : \n", j);
        printf("\tDie Anzahl der Kurgaeste : %i\n",p[i].AnzahlderGaeste);
        printf("\tDie durchschnittliche Tagestemperatur : %.2lf\n",p[i].Temp);
        printf("\tDer Titel des wichtigsten Events des Monats : %s\n", p[i].TitelEvent);
        j++;
    }
    printf("\n\n");
}

void tausche(Game *p, Game *g)
{
    Game help = *p;
    *p = *g;
    *g = help;
}

void Sortiere(Game * p, int nom)
{
    for (int n = 12; n>1; n--) 
    { 
        for (int i = 0; i<n-1; i++) 
        {
            
            if (nom == 1)
            {
                if (p[i].AnzahlderGaeste > p[i+1].AnzahlderGaeste)
                {
                    tausche(p+i, p+i+1);
                }
            }
            else if (nom == 2)
            {
                 if (p[i].Temp > p[i+1].Temp)
                {
                    tausche(p+i, p+i+1);
                }
            }
            else if (nom == 3)
            {
                 if (p[i].TitelEvent[0] > p[i+1].TitelEvent[0])
                {
                    tausche(p+i, p+i+1);
                }
            }
            else
            {
                printf("Please choose between 1, 2 or 3! : ");
                scanf("%i\n", &nom);
                Sortiere(p, nom);
            }       
        }
    }
}

void Textmix()
{
    char *let;
}


int main(void)
{
    Game Array[12]= {

    {412, 2.34, "Holliday on Icecream"},
    {352, -11.32, "Skizirkus Graswandertoni"},
    {78, 3.72, "Haselnussbluete am Kroetenbrunnen"}, 
    {201, 5.68, "Rheingoldsuche mit Hagen"},
    {534, 11.11, "Siegfried und der Maidrache"}, 
    {478, 17.34, "Zauberfloete im Hochschul-Atrium"}, 
    {1267, 28.99, "Pfrimmschwimmen fuer Alle"}, 
    {1482, 24.02, "Heuschobernaechte rustikal"}, 
    {739, 19.44, "Indian Summer in der Pfalz"},
    {333, 10.55, "Weinlese im Weingut Oechsle"},
    {12, 6.66, "Eat what you can mit Martinsgans"}, 
    {856, -3.22, "Bratapfelwettbewerb im Heylshof"}
    };
    affichage(Array, 12);

    int nom = 0;
    printf("Fuer wen ist die Liste : \n\t 1) fuer die Kurverwaltungschefin  \n\t 2) fuer die Ingenieurin des Blockheizkraftwerks  \n\t 3) fuer den Kunstdezernenten \n =========>  ");
    scanf("%i", &nom);
    
    Sortiere(Array,nom);
    printf("\n");
    affichage(Array, 12);
    printf("\n\n");

    return 0;
}
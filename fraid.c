#include<stdio.h>

int main(void){
    int z = 0, r, jour, heure, minute, seconde, mois, annee;

    printf("Geben bitte die Zahl von sekunden : %i", z);
    scanf("%i", &z);

    annee = z / 31104000;
    r = z % 31104000;
    mois = r / 2592000;
    r = r % 2592000;
    jour = r / 86400;
    r = r % 86400;
    heure = r / 3600;
    r = r % 3600;
    minute = r / 60;
    r = r % 60;
    seconde = r;
    if (mois != 0)
    {
        printf("cest egal a : %i mois (s)\t", mois);
    }
    if (jour != 0)
    {
        printf(" : %i jour(s)\t", jour);
    }
     if (heure != 0)
    {
        printf(" : %i heure(s)\t", heure);
    }
     if (minute != 0)
    {
        printf(" : %i minutes(s)\t", minute);
    }
     if (seconde != 0)
    {
        printf(" : %i seconde(s).", seconde);
    }
    
   

}
#include<stdio.h>

int main(){
    int Auswahl;
    printf("waehlen Sie ein Getraenk aus :\n");
    printf("(1) WAsser (0.50)\n");
    printf("(2) limonade (1.0)  \n");
    printf("(3) Schokolade (2.0) \n");
    printf("Geben sie 1,2 oder 3 ein :");
    scanf("%i", &Auswahl);

    float Preis;
    switch (Auswahl) {
    case 1:
        Preis = 0.50;
    break;
     case 2:
        Preis = 1.0;
    break;
     case 3:
        Preis = 2.0;
    break;
    
    default:
        printf("fangen Sie nochmal das Programm an und geben sie 1,2 oder 3 ein ");
        break;
    }

    float Einwurf, S;
    printf("Bitte werfen Sie %.2f  ein : ", Preis);
    scanf("%f", &Einwurf);
    if (Einwurf == Preis)
    {
        printf("Danke fuer Ihren Einkauf");
    }
    if (Einwurf > Preis)
    {
        S = Einwurf - Preis;
        printf("Sie bekommen %.2f  zurueck.", S);
    }
    else{
        printf("Bitte werfen Sie %.2f  ein", Preis);
    }
    
return 0;
}

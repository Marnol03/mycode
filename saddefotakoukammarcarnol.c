/* Aufgabe: Kalender
Name : saddefo Marc
Datum : Dienstag 25. Oktober 2022
Beschreibung:Es geht um eine einfache Kalenderdarstellung (Monate und
Tage)
*/

#include <stdio.h>

int main(){
    enum Monat {Januar = 1 , Febuar, Maerz, 
          April, Mai, Juni, Juli, August, September, Oktober, November, Dezember};
    enum Monat monat = 1;                                                           /* Deklaration und Einru?cken der BeginntageInitialisierung von Variable */
    int i , t , tags_pro_mo,r;

    for (monat = 1; monat <= 12 ; monat++)
    {
       
        i = 1; 
     switch (monat)    /* Auswahl von Monaten*/
     {
      case Januar:
        tags_pro_mo = 31;
        printf("Januar \n");
       
        break;
     case Febuar:
        tags_pro_mo = 28;
        printf("Februar \n");
       
        break;
     case Maerz:
        tags_pro_mo = 31;
        printf("Maerz \n");
       
        break;

     case April:
        tags_pro_mo = 30;
        printf("April \n");
       
        break;

     case Mai:
        tags_pro_mo = 31;
        printf("Mai \n");
       
        break;

     case Juni:
        tags_pro_mo = 30;
        printf("Juni \n");
       
        break; 
     case Juli:
        tags_pro_mo = 31;
        printf("Juli \n");
       
        break;

     case August:
        tags_pro_mo = 31;
        printf("August \n");
       
        break;

     case September:
        tags_pro_mo = 30;
        printf("September \n");
       
        break;

     case Oktober:
        tags_pro_mo = 31;
        printf("Oktober\n");
       
        break; 

     case November:
        tags_pro_mo = 30;
        printf("November\n");
       
        break;

     case Dezember:
        tags_pro_mo = 31;
        printf("Dezember \n");
       
        break;   
    }
    
    for (r = 1 ; r <= t; r++) /* Einru?cken der Beginntage */
    {
        printf("\t");
    }
   
    do
      {
         printf("%d\t", i);
         t++;
         
        if ( t >6 )     /*Nach jeweils 7 Tagen soll eine neue Zeile begonnen werden.*/
        {
            printf("\n");
            t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );


    printf("\n");
    
    }
    return 0;
}
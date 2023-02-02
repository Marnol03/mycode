
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

enum Bewertung {nicht_teilgenommen,sehr_gut,gut,befrieden,ausreichend,nicht_bestanden};

typedef struct Student{
    char Vorname [100];
    char Nachname [100];
    int Matrikelnummer;
    double Note;
}student;



double funktion(double note)
{   double s=0;
    int t1=0,i=0;
     do
    {
        t1 = rand()%6;
        i++;
        switch (t1)
        {
            case nicht_teilgenommen:
                printf("Fach %i    Note : %i nicht_teilgenommen\n", i, t1);
                break;
            case sehr_gut:
                printf("Fach %i    Note : %i sehr gut\n", i, t1);
                break;
            case gut:
                printf("Fach %i    Note : %i gut\n", i, t1);
                break;
            case befrieden:
                printf("Fach %i    Note : %i befriedigend\n", i, t1);
                break;
            case ausreichend:
                printf("Fach %i    Note : %i ausreichend\n", i, t1);
                break;
            case nicht_bestanden:
                printf("Fach %i    Note : %i nicht bestanden\n", i, t1);
                break;
            default:
                printf("ungueltiger Wert");
        
            break;
            
        }
        s += t1;
        
    } while (i < 5);
    printf("la valeur de s est : %.2lf",s);

    note = s/5;
    return note;
}
int main() 
{ 
   double note =0 ;

    srand(time(NULL));
    student nummer1 = {"Marc","Saddefo",4164,funktion(note)};
    
    printf("\nStudentName : %s\n StudentVorname : %s\n Matrikelnummer %i\n Notendurchschnitt : %.2lf\n", nummer1.Vorname, nummer1.Nachname, nummer1.Matrikelnummer, nummer1.Note );
    
    return 0; 
}
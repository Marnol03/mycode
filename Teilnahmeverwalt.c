#include<stdio.h>

typedef struct Event{
    char Vorname;
    char Nachname;
    char Berufsbezeichnung[100];
    int Tischnummer;
    struct Event *next;

}event;

void affichage(event *Teilnehmer)
{
    printf("Vorname : %s\t Nachname : %s\t Berufsbezeichnung : %s\t Tischnummer : %i\n", Teilnehmer->Vorname, Teilnehmer->Nachname, Teilnehmer->Berufsbezeichnung, rand()%4+1);
}

event *Add(event *T, char *A, char *B, char *C)
{
    

}

int main()
{
    event *Teilnehmer = NULL;




    return 0;
}
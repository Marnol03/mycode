/* Name : Saddefo t. Marc A.
Datum: 30/11/2022
Beschreibung: Wir werden ein Programm schreiben, das nach einem Wort in einem Satz sucht und das Wort ersetzt
*/


#include<stdio.h>
#include<string.h>


void replaceWord(char *work,char *find,char *subst,int bufsiz)
{
	if(strstr(work,find))//mit unsere if-Anweisung,werden wir überprüfen, ob sich die 'find'  in 'work' befindet.
	{
		int i=0;
		char HELP[1000];
		int bufsiz=strlen(work);int laengeFind=strlen(find);
		
		do//alle Array Zeichen durchführen je nach der Länge von dem Wort "find"
		{
			if(!strncmp(work+i,find,laengeFind))//Vergleich zwischen den lenf-ersten Zeichen von Wort in der Stelle i mit den 
			
            {
				strcpy(HELP,work+i+laengeFind);
				strcpy(work+i,subst);
				strcat(work,HELP);
				
				break;// wollen wir nur die este Aufgetretene 'find'
				
			}
			else{i++;}
		
		
		}while(i<bufsiz-laengeFind+1);
	
	}
	else{printf("|%s| befindet sich nicht in |%s|\n",find,work);}


}


void replaceWordAll(char *work,char *find,char *subst,int bufsiz)
{
	if(strstr(work,find))//mit unsere if-Anweisung,werden wir überprüfen, ob sich die 'find'  in 'work' befindet.
	{
		int i=0;
		char HELP[100];
		int bufsiz=strlen(work);int laengeFind=strlen(find);
		
		while(i<bufsiz+strlen(subst)+laengeFind)/*das ganze Array "Wort" zurückführen plus die Länge  von dem Wort "subst" und dem Wort "find", um der Fall zu verneiden,dass es ausreichend PLatz für alle Ersetzungen bietet*/
		{
			if(!strncmp(work+i,find,laengeFind))/*Vergleich zwischen den erste Zeichen von 'work' in der Stelle i mit den Zeichen von find*/
			{
				strcpy(HELP,work+i+laengeFind);
				strcpy(work+i,subst);
				strcat(work,HELP);
				i++;/*Mit dem naechsten Zeichen anfangen*/
				
			}
			else
            {
                i++;/* Sonst fagen wir direkt mit dem  nächsten Wort*/
            }
		
		
		}
	
	}
	else{printf("es gibt keine |%s| in |%s|\n",find,work);}


}



int main()
{
	char ausreichender[2000]="Die Muf sieht mit Grufsen eine Pin mit Brufe durch die Klufe sufen";
	
	printf("Am Anfang ist unsere Array :  ");
	printf("%s\n",ausreichender);
    printf("----------------------------------------------------\n");
	printf("\nNach der Funktion replaceWord(),wo wir die 'Pin' durch die 'Luft' ersetzt haben: \n");
	replaceWord(ausreichender,"Pin","Luf",strlen(ausreichender));
	printf("%s\n",ausreichender);
    printf("----------------------------------------------------\n");
	printf("\nNach der Funktion replaceWordAll(),wo wir alle  'uf' durch die 'aus' ersetzt haben: \n");
	replaceWordAll(ausreichender,"uf","aus",strlen(ausreichender));
	printf("%s\n",ausreichender);

	return 0;
}

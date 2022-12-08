/* Programm fuer Integer-Arrays mit mehrere Teile

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MYARRAYSIZE 1000
#define MYSTATSIZE 10

/* Funktion init    */
void init(int intArr [], int arrSize) {
     int i = 0;    				 /* Laufindex der Schleife	*/
     
     for(i = 0; i < arrSize; i++) {
        intArr[i] = (rand() % 1000) + 1;
     }

}
/* Funktion ausgabe */
void ausgabe(int intArr[], int arrSize) {
     int i = 0;					 /* Laufindex der Schleife	*/	
     int teiler = 0;

     for(i = 0; i < arrSize; i++) {
        printf("%4d\t", intArr[i]);
     	teiler++;
     	if ((teiler % 10) == 0) {
            printf("\n");
     	    teiler = 0;
     	}
     }
}
/* Funktion statistik   */
void statistik(int myArray[], int mystat[], int sizeMyArray, int sizeMystat){
     int i = 0;					 /* Laufindex der Schleife	*/
     
     for(i = 0; i < sizeMyArray; i++) {
     	if (myArray[i] > 900) {
     	    mystat[9]++;	
     	}
     	else if (myArray[i] > 800) {
     	    mystat[8]++;	
     	}
     	else if (myArray[i] > 700) {
     		mystat[7]++;
     	}
     	else if (myArray[i] > 600) {
     		mystat[6]++;
     	} 
     	else if (myArray[i] > 500) {
     		mystat[5]++;
     	}
     	else if (myArray[i] > 400) {
     		mystat[4]++;
     	}
     	else if (myArray[i] > 300) {
     		mystat[3]++;
     	}
     	else if (myArray[i] > 200) {
     		mystat[2]++;
     	}
     	else if (myArray[i] > 100) {
     		mystat[1]++;
     	}
     	else {
     		mystat[0]++;
     	}
     }

}

/* Funktion suche   */
int suche(int intArr[], int arrSize, int gesuchteZahl) {
    int i = 0;          /* Laufindex der Schleife   */
    
    for (i = 0; i < arrSize; i++) {
    	if (intArr[i] == gesuchteZahl) {
    	    return i;
    	}
    }
    return -1;
}

/* Funktion tausche */
void tausche(int intArr[], int index1, int index2) {
      
      int help = intArr[index1];
      intArr[index1] = intArr[index2];
      intArr[index2] = help;
}

/* Funktion sortiere    */
void sortiere(int intArr[], int arrSize) {
     int i = 0;
     int n;
     for (n = arrSize; n > 1; n--) {
     	 for (i = 0; i < n-1; i++) {
     	     if (intArr[i] > intArr[i+1]) {
     	     	tausche(intArr, i, i+1);
     	     }	
     	 }
     }

}

int main() {

    srand(time(NULL));
    int myarray[MYARRAYSIZE] = {0};
    int mystat[MYSTATSIZE] = {0};
    int gesuchteZahl = 0;
    int index = 0;
    
    init(myarray, MYARRAYSIZE);
    ausgabe(myarray, MYARRAYSIZE);
    
    printf("HEUFIGKEITSVERTEILUNG: \n");
    statistik(myarray, mystat, MYARRAYSIZE, MYSTATSIZE);
    ausgabe(mystat, MYSTATSIZE);
    
    printf("Bitte geben Sie eine Zahl ein, die Sie finden möchten: ");
    scanf("%d", &gesuchteZahl);
    index = suche(myarray, MYARRAYSIZE, gesuchteZahl);  
    
    if (index != -1) {
    	printf("Die gesuchte Zahl ist an der Stelle %d im Array\n", index);
    } 
    else {
    	printf("Die Zahl wurde nicht gefunden!\n");
    }
    
    printf("Das sortierte Array ist : \n");
    sortiere(myarray, MYARRAYSIZE);
    ausgabe(myarray, MYARRAYSIZE);
    
    return 0;
}




// Ziel: Integer-Arrays in mehreren Teilen

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#define ARRAYSIZE 1000

#define ARRAYSIZE2 10


void init(int intArr[], int arrSize) {
  srand(time(NULL));

  // Random Eingabe

  for (int i = 0; i < ARRAYSIZE; i++) { // 1000 Elemente werden ausgegeben.

    intArr[i] = rand() % (1000 + 1) + 0; // Zufallszahlen liegen zwischen 1-1000
  }

}

void ausgabe(int intArr[], int arrSize) {

  for (int i = 0; i < ARRAYSIZE; i++) { // 4 Stellen pro Zahl, 10 Zahlen pro Zeile

    if (i % 10 == 0) {
      // Es m?ssen 10 Zahlen in einer Zeile stehen. Daher geht es nach der Eingabe von 10 Zahlen in die n?chste Zeile.

      printf("\n");
    }
    printf("%4i   ", intArr[i]); // 4 Stellen pro Zahl
  }

}

int statistik(int arrSize, int arrSize2,int intArr[]){

        int a1=0;
        int a2=0;
        int a3=0;
        int a4=0;
        int a5=0;
        int a6=0;
        int a7=0;
        int a8=0;
        int a9=0;
        int a10=0;


    for(int i=0; i<arrSize; i++){

      int random  = rand() % (1000 + 1) + 0; // Zufallszahlen liegen zwischen 1-1000

      //ausgabe(intArr[],arrSize)
      intArr[i]=random;



            if(intArr[i] >0 && intArr[i] <=100){
                a1++;

            }

            else if(intArr[i] >100 && intArr[i] <=200){
                a2++;

            }
            else if(intArr[i] >200 && intArr[i] <=300){
               a3++;

            }
            else if(intArr[i] >300 && intArr[i] <=400){
                a4++;

            }
            else if(intArr[i] >400 && intArr[i] <=500){
                a5++;

            }
            else if(intArr[i] >500 && intArr[i] <=600){
                a6++;

            }
            else if(intArr[i] >600 && intArr[i] <=700){
               a7++;

            }
            else if(intArr[i] >700 && intArr[i] <=800){
                a8++;

            }
            else if(intArr[i] >800 && intArr[i] <=900){
                a9++;

            }
            else if(intArr[i] >900 && intArr[i] <=1000){
               a10++;

            }


        }

     int mystat[10];
     mystat[0] = a1;
     mystat[1] = a2;
     mystat[2] = a3;
     mystat[3] = a4;
     mystat[4] = a5;
     mystat[5] = a6;
     mystat[6] = a7;
     mystat[7] = a8;
     mystat[8] = a9;
     mystat[9] = a10;

    printf("1st element of mystat Array: 0-100==> %d \n",mystat[0]);
    printf("2st element of mystat Array: 101-200==>%d \n",mystat[1]);
    printf("3st element of mystat Array: 201-300==> %d \n",mystat[2]);
    printf("4st element of mystat Array: 301-400=> %d \n",mystat[3]);
    printf("5st element of mystat Array: 401-500==> %d \n",mystat[4]);
    printf("6st element of mystat Array: 501-600==> %d \n",mystat[5]);
    printf("7st element of mystat Array: 601-700==>%d \n",mystat[6]);
    printf("8st element of mystat Array: 701-800==> %d \n",mystat[7]);
    printf("9st element of mystat Array: 801-900==> %d \n",mystat[8]);
    printf("10st element of mystat Array: 901-1000==> %d \n",mystat[9]);

}
int main() {

  int myArray[ARRAYSIZE]; // Wir setzen ein Beispiel-Array.
  init(myArray, ARRAYSIZE); // Beispiel-Array wird in der ersten Funktion angewendet.
  ausgabe(myArray, ARRAYSIZE); // Beispiel-Array wird in der zweiten Funktion angewendet.
  printf("\n");

  int mystat[ARRAYSIZE2]; // Wir setzen zweite(klein) Beispiel-Array.
  init(mystat, ARRAYSIZE2);
  ausgabe(mystat, ARRAYSIZE2); // Beispiel-Array wird in der zweiten Funktion angewendet.
  printf("\n");

  int newarray[ARRAYSIZE];

  statistik(ARRAYSIZE,ARRAYSIZE2,newarray);

  //Rufen Sie die ausgabe() Funktion f?r das kleine Array mit den Statistik-Daten auf.

  return 0;


}

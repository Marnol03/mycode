#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARRSIZE 1000

void init ( int intArr [], int arrSize)
{
    for (int i= 0; i < arrSize;i++ )
    {
        intArr [i] =1 + rand()%5000;
    }
}

void Ausgabe (int intArr [], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        if(i%10 == 0 )
        {
            printf("\n");
        }
        printf("%5d\t", intArr[i]);
    }       
}

int Suche(int intArr[], int arrSize, int gesucht)
{
    static int i = 0;
    if (i < arrSize)
    {
        for(i = i; i < arrSize;i++)
        {
            if(intArr[i] == gesucht)
            {
                printf("%i,", i);
                i++;
                return Suche(intArr, arrSize,gesucht);
            }
        }
    }
    else
    {
        return -1;
    }
    return 0;
   
}

void tausche(int *a, int *b)
{
    int a1;

    a1 = *a;
    *a = *b;
    *b = a1;
}

void Sortiere(int *myArray, int arrSize)
{
    static int i = 0;

   for (int n = arrSize; n>1; n--) 
   { 
        for (i = 0; i<n-1; i++) 
        {
            if (*(myArray+i) > *(myArray+i+1)) 
            { 
            tausche(myArray+i, myArray+i+1);
            } 
        }
   }
}

void mini()
{
    
}

int main ()
{
    int myArray [ARRSIZE], gesucht;

    srand(time(NULL));
    init(myArray,ARRSIZE);
    Ausgabe(myArray, ARRSIZE );
    printf ("\n");
    Sortiere(myArray,ARRSIZE);
    Ausgabe(myArray, ARRSIZE );

    printf("\n Geben Sie eine ganze Zahl ein : ");
    scanf("%d", &gesucht);
    printf("\ndie eigegebene Zahl hat der Index : ");
    Suche(myArray,ARRSIZE,gesucht);

    return 0;
}
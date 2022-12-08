#include<stdio.h>
#include<stdlib.h>
#define ARRSIZE 81

int main()
{
  char charArr[ARRSIZE];
  int i = 0;
  char c;

  printf("Bitte Zeichen eingeben, Ende mit STRG-D: ");

  do
  {
    c = getchar();
    if(c == EOF)
    {
      break;
    }

    charArr[i] = c;
    i++;
  } while (1);

  charArr[i] = "\0";
  printf("\nEingabe ist : [%s]\n", charArr);
  return 0;
}
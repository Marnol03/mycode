#include <stdio.h>
#include <stdbool.h>

bool isprim(int NutzerInput, int divisor)
{ 
  if (divisor <=(NutzerInput/2))
  {
    return isprim(NutzerInput, (divisor + 1));
  }
  if (NutzerInput % divisor == 0)
  {
    return false;
  }
  else
    {
      return isprim(NutzerInput, (divisor + 1));
      
    }
  
  if(NutzerInput == divisor)
  {
    return true;   
  }
  return false; 
   
}

int main()
{
  int NutzerInput,divisor=2, counter;
  do
  {
    printf("Geben Sie eine natuerliche Zahl :");
    scanf("%i", &NutzerInput);
  } while (NutzerInput <= 0);
  
  if (isprim(NutzerInput,divisor)== false)
  {
    printf("%i ist keine PrimaZahl\n", NutzerInput);
  }
  else
  {
     printf("%i ist eine PrimaZahl\n", NutzerInput);
  }

  printf("die Primazahlen bis 1000 sind:");
  for (counter = 0;counter<= 10000;counter++)
  {
    if(isprim(counter, divisor)== true)
    printf("%i, ", counter);
  }

  return 0;
}

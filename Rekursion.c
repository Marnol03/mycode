#include<stdio.h>

int fakult(int number)
{
    if(number < 0)
    {
        return 0 ;
    }
    else
    {
        if (number == 0)
        {
            return 1;
        }
        return number* fakult(number - 1);
    }
}

int fibo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else if (n <0)
    {
        return 0;
    }
    return fibo(n-1) + fibo(n-2);
}

int power(int x, int y)
{   
    if (x==0 || x < 0)
    {
        return 0;
    }
    if (y < 0)
    {
        return 0;
    }
    else {
        if(y == 0)
        {
            return 1;
        }
        return x * power(x,y-1);
    }
    
}

int main()
{
    int number;

    printf("Geben Sie eine Zahl : ");
    scanf("%i",&number);
    printf("%i\n", fakult(number));

    int x,y;

    printf("Geben Sie die Wert von x : ");
    scanf("%i", &x);
    printf("Geben Sie die Wert von y : ");
    scanf("%i", &y);
    printf("%i\n", power(x,y));

    int n;
    
    printf("die ersten 10 Fibonacci-Zahlen sind : ");
    do
    {
        printf("%i\t", fibo(n));
        n++;
    }while(n < 10);
}

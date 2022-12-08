#include <stdio.h>
#include <math.h>


int main()
{
    float x1,x2,a,b,c,G;
    
    printf("Geben sie die Wert von a ein: ");
    scanf("%f", &a);

    printf("Geben sie die Wert von b ein: ");
    scanf("%f", &b);

    printf("Geben sie die Wert von c  ein: ");
    scanf("%f", &c);

    G = (b*b)-(4*a*c);
    
    if (G>0)
    {
        x1 = (-b + sqrt (G));
        x2 = (-b - sqrt (G));
        
        printf("x1 =%.2f und x2=%.2f",x1,x2);
    }
    if (G==0)
    {
        x1 = (-b)/2*a;
        printf("x1 = x2= %.2f",x1);
    }
    else if(G<0)
    {
        printf("es gibt keine Solution");
    }
    
    return 0;
}
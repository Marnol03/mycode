#include<stdio.h>
 
 int main () {
    char buchst;

    printf(" bitte an der Tastatur Zeichen eigeben, Abbruch mit Strg-D : ");
    do
    {
        buchst = getchar();
        if (buchst == EOF){
            break;
        }

        if (buchst ==' '){
            continue;
        }
        if (buchst =='a'){
            buchst ='@';
        }
        if (buchst =='e'){
            buchst ='3';
        }
        if (buchst =='i'){
            buchst ='!';
        }
        if (buchst =='o'){
            buchst ='0';
        }
        if (buchst =='u'){
            buchst ='_';
        }
        
        putchar (buchst);
    } while (1);
    

    return 0;
 }

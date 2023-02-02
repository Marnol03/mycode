#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Player
{
    signed char username[100];
    int hp;
    int mp;
}Player;



int main(void)
{
    int i = 0;
    Player p1 = {"Marc", 100, 100};

    printf("Nom du joueur : %s\n", p1.username);
    printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

    strcpy(p1.username, "Brayan");
    p1.hp -=50;

    printf("Nom du joueur : %s\n", p1.username);
    printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

    char * tab=malloc(5 * sizeof(char));
    return 0;
}
#include <stdio.h>
 int main(){
    char *mois [] = {"J A N V I E R","F E V R I E R" , "M A R S " , "A V R I L", "M A I" , " J U I N ", " J U I L L E T " , " A O U T ", " S E P T E M B R E ", " O C T O B R E "," N O V E M B R E " , " D E C E M B R E "};
    int jour_par_mois [] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i, j, totaljours, jour_par_semaine = 0, conteur_jours = 0;

    for (i= 0; i < 12; i++){
        printf("\n\n\t----------------%s----------------- \n", mois [i]);
        printf(" \tLun\tMar\tMer\tJeu\tVen\tSam\tDim     \n");

        /*for(conteur_jours = 1; conteur_jours <= jour_par_semaine; conteur_jours++){
            printf("\t");
        }*/
        totaljours = jour_par_mois[i];
        for(j= 1; j <=totaljours; j++){
            printf("\t%d", j);
            jour_par_semaine++;

            if(jour_par_semaine > 6){
                jour_par_semaine = 0;
                printf("\n");
            }
        }

    }

    return 0;

}
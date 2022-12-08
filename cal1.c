#include <stdio.h> 
enum month {Januar = 1 , Febuar, Maerz, 
          April, Mai, Juni, Juli, August, September, October, November, Dezember}; 
  
int main() {
  // Enums can also take their integer equivalent values
  enum month this_Month = 1 ;
  int i = 1, t, tags_pro_mo;

  switch(this_Month)
  {
    case 1:
       printf("J a n u a r\n");
        tags_pro_mo = 31;
      do
      {
         printf("%d\t", i);
         t++;
        if ( t >6 )
        {
             printf("\n");
             t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );

      printf("\n");
    case 3 :
      printf("M a e r z\n");
       tags_pro_mo = 31;
        printf("Lun\tMar\tMer\tjeu\tven\tsam\tdim\n");
      do
      {
         printf("%d\t", i);
         t++;
        if ( t >6 )
        {
             printf("\n");
             t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );
      printf("\n");
    case 5:
      printf("----------------  M a i  ----------------\n");
       tags_pro_mo = 31;
        printf("Lun\tMar\tMer\tjeu\tven\tsam\tdim\n");
      do
      {
         printf("%d\t", i);
         t++;
        if ( t >6 )
        {
             printf("\n");
             t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );
    case Juli:
      printf("---------------- J u l i ----------------\n");
       tags_pro_mo = 31;
        printf("Lun\tMar\tMer\tjeu\tven\tsam\tdim\n");
      do
      {
         printf("%d\t", i);
         t++;
        if ( t >6 )
        {
             printf("\n");
             t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );
    case August:
      printf("--------------- A u g u s t ----------------\n");
       tags_pro_mo = 31;
        printf("Lun\tMar\tMer\tjeu\tven\tsam\tdim\n");
      do
      {
         printf("%d\t", i);
         t++;
        if ( t >6 )
        {
             printf("\n");
             t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );
    case October:
        printf("---------------O c t o b e r  ----------------\n");
         tags_pro_mo = 31;
        printf("Lun\tMar\tMer\tjeu\tven\tsam\tdim\n");
      do
      {
         printf("%d\t", i);
         t++;
        if ( t >6 )
        {
             printf("\n");
             t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );
    case Dezember:
        printf("-------------- D e z e m b e r ----------------\n");
        tags_pro_mo = 31;
        printf("Lun\tMar\tMer\tjeu\tven\tsam\tdim\n");
      do
      {
         printf("%d\t", i);
         t++;
        if ( t >6 )
        {
             printf("\n");
             t = 0;
        }
        i++;
       
      } while (i <= tags_pro_mo );
    break;
    default: 
    printf("---------------- F e b u a r ----------------\n");
  }
    return 0; 
} 
#include <stdio.h>
void main ()
 {
 int number_1, number_2, yes_no,i;
 for( i=1, yes_no =1;yes_no && i<6; i++ )
 {
 printf("Cienījamais lietotājs, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number_1);
 printf("Cienījamais lietotājs, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number_2);

 if (number_1 > number_2)
   printf("%d ir lielāks nekā %d\n ",number_1, number_2);
 if (i!=5)
 {
 printf("Cienījamais lietotājs, vai gribi turpināt(šī bija %d. reize)?\n",i);
 printf("(jā - jebkurš skaitlis, izņemot 0)\n ");
 scanf("%d",&yes_no);
 }
 else 
 printf("Ši programma ir beigusies :) Paldies par izmantošanu!\n");
 }
 }

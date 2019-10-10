#include <stdio.h>
void main ()
 {
 int yes_no,number_1, number_2;
 printf("Cienījamais lietotājs, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number_1);
 printf("Cienījamais lietotājs, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number_2);
 if (number_1 > number_2)
   printf("%d ir lielāks nekā %d\n ",number_1, number_2);
   printf("Šis teksts paradisies jebkurā gadījumā\n");
 if (number_1 > number_2)
{   printf("%d ir joprojām lielāks nekā %d\n ",number_1, number_2);
   printf("Bet šis teksts neparadisies jebkurā gadījumā\n");
}
 }

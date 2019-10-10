#include <stdio.h>
void main ()
 {
 int number_1, number_2, yes_no, i=0;
 yes_no =1;
 while(yes_no && i<5 )
 {
 i=i+1;// i++; i+=1;
 printf("Cienījamais lietotājs, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number_1);
 printf("Cienījamais lietotājs, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number_2);

 if (number_1 > number_2)
   printf("%d ir lielāks nekā %d\n ",number_1, number_2);
// break;
 printf("Cienījamais lietotājs, vai gribi turpināt(šī bija %d. reize)?\n",i);
 printf("(jā - jebkurš skaitlis, izņemot 0)\n ");
 scanf("%d",&yes_no);

  }
   printf("Šis teksts paradisies jebkurā gadījumā\n");
 }

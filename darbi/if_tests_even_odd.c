#include <stdio.h>
void main ()
 {
 int number;
 printf("Cienījamais lietotājs, lūdzu, ievadi skaitli: ");
 scanf("%d",&number);
 if (number % 2 == 0)
  printf("%d ir pāra skaiklis\n ",number);
 else
  printf("%d ir nepāra skaitlis\n ",number);
 }

#include <stdio.h>
#include <time.h>
void main ()
 {
 int number;
 clock_t start_t, end_t, total_t;
 printf("Cienījamais lietotājs, lūdzu, ievadi skaitli: ");
 scanf("%d",&number);
 start_t = clock();
 if (number % 2 == 0)
  printf("%d ir pāra skaiklis\n ",number);
 else
  printf("%d ir nepāra skaitlis\n ",number);

 end_t = clock();
 //total_t = (double) (end_t - start_t) / CLOCK_PER_SEC;
 printf("Apreķins aizņema %ld līdz %ld -> %ld (s)\n ",start_t, end_t, end_t - start_t);
 start_t = clock();
 if (number %2)
  printf("%d ir nepāra skaiklis\n ",number);
 else
  printf("%d ir pāra skaitlis\n ",number);

 end_t = clock();
 printf("Apreķins aizņema %ld līdz %ld -> %ld (s)\n ",start_t, end_t, end_t - start_t);

 start_t = clock();
 if ((number <<31)>>31)
  printf("%d ir nepāra skaiklis\n ",number);
 else
  printf("%d ir pāra skaitlis\n ",number);

 end_t = clock();
 printf("Apreķins ar << >> aizņema %ld līdz %ld -> %ld (s)\n ",start_t, end_t, end_t - start_t);
 }

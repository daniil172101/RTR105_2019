#include<stdio.h>

void main()
 {
 int i=0,N,fact=1, fact_old=1;
  printf("Kura skaitļa faktoriāls tu gribi aprēķināt?\n");
  scanf("%d",&N);
 for (i=1;i<=N;i++)
  fact = fact * i;
 for (i=1;i<=N-1;i++)
  fact_old = fact_old * i;
 if (fact/i == fact_old)
  printf("Skaitļa %d faktoriāls ir %d\n",N, fact);
 else
  printf("Diemžēl ir sasniegta datu tipa robeža\n");
 }

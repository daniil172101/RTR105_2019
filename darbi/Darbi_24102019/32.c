#include<stdio.h>

void main()
 {
 int i=0,N,fact=1, fact_old=1;
  printf("Līdz kuram skaitlim tu gribi aprēķināt faktoriālu?\n");
  scanf("%d",&N);
 if (N>=0)
   printf("Skaitļa %d faktoriāls ir %d\n",0, fact);
 for (i=1;i<=N-1;i++)
 {
  fact = fact * i;
  fact_old = fact;
  printf("Skaitļa %d faktoriāls ir %d\n",i, fact);
 if ((fact*i)/i != fact_old)
  break;
  }
  fact = fact * i;
 if (fact/i == fact_old && N != 0)
  printf("Skaitļa %d faktoriāls ir %d\n",N, fact);
 else if (N==0);
 else
  printf("Diemžēl ir sasniegta datu tipa robeža\n");
 }

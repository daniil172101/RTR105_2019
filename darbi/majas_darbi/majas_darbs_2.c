#include<stdio.h>

int skaitla_uzminejums()
 {
 int i_uf;
 printf("Cienījamais lietotājs, lūdzu, ievadi skaitli:");
 scanf("%d",&i_uf);
 return i_uf;
 }

void main()
 {
 int skaitlis, N=7;

 skaitlis=skaitla_uzminejums();

 while(skaitlis<N)
  {
  printf("Skaitlis %d ir mazāks nekā skaitlis, kuru esmu iedomājis\n", skaitlis);
  skaitlis=skaitla_uzminejums();
 while(skaitlis>N)
  {
  printf("Skaitlis %d ir lielāks nekā skaitlis, kuru esmu iedomājis\n", skaitlis );
  skaitlis=skaitla_uzminejums();
  }
  }
  printf("Apsveicu, tu esi ievadījis 7!\n");
 }


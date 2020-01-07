#include<stdio.h>
#include<math.h>

void main(){
 long double x,y,a,s;
 int k=0;

 printf("Lietotājs, lūdzu, ievadi x vērtību:\n");
 scanf("%Lf",&x);
 y = (1+x)*exp(x);
 printf("%.2Lf\t%.2Lf\n",x,y);

 a = (1+x)*pow(x,0)/(1);
 s += a;

 while (k<1000)
 {
  k++;
  a = a*x/(k);
  s += a;
  if (k == 999)
   printf("%.2Lf\t%Le\t%.2Lf\n",x,a,s);
 }
 printf("%.2Lf\t%Le\t%.2Lf\n",x,a,s);

 printf("\t\t1000\n");
 printf("\t\t----\n");
 printf("\t\t\\\t\t        k\n");
 printf("\t\t \\\t\t(1+x)*x\n");
 printf("f(x)=\t\t|\t    ----------------\n");
 printf("\t\t /\t\t   k!\n");
 printf("\t\t/\n");
 printf("\t\t----\n");
 printf("\t\tk=0\n");

 printf("\n");
 printf("\t\t\tx\n");
 printf("R=\t\t   -----------\n");
 printf("\t\t\tk\n");
}


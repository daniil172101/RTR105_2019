#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,a,s,k=0;

 y += (1+x)*exp(x);
 printf("%.2f\t%.2f\n",x,y);

 a = (1+x)*pow(x,0)/(1);
 s += a;

 while (k<1000)
 {
  k++;
  a = a*x/(k);
  s += a;
 }
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);
}


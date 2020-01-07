#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,a,s;
 
 y += (1+x)*exp(x);
 printf("%.2f\t%.2f\n",x,y);

 a = (1+x)*pow(x,0)/(1);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(1*1);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(2);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(3);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(4);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(5);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(6);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(7);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = a*x/(8);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);
}


#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,a,s;
 
 y += (1+x)*exp(x);
 printf("%.2f\t%.2f\n",x,y);

 a = (1+x)*pow(x,0)/(1);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,1)/(1*1);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,2)/(1*1*2);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,3)/(1*1*2*3);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,4)/(1*1*2*3*4);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,5)/(1*1*2*3*4*5);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,6)/(1*1*2*3*4*5*6);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,7)/(1*1*2*3*4*5*6*7);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a = (1+x)*pow(x,8)/(1*1*2*3*4*5*6*7*8);
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);
}


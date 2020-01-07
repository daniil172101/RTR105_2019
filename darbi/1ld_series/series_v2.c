#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,a0,a1,a2,a3,a4,a5,a6,a7,a8,s;
 
 y += (1+x)*exp(x);
 printf("%.2f\t%.2f\n",x,y);

 a0 = (1+x)*pow(x,0)/(1);
 s += a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a0,s);

 a1 = (1+x)*pow(x,1)/(1*1);
 s += a1;
 printf("%.2f\t%.2f\t%.2f\n",x,a1,s);

 a2 = (1+x)*pow(x,2)/(1*1*2);
 s += a2;
 printf("%.2f\t%.2f\t%.2f\n",x,a2,s);

 a3 = (1+x)*pow(x,3)/(1*1*2*3);
 s += a3;
 printf("%.2f\t%.2f\t%.2f\n",x,a3,s);

 a4 = (1+x)*pow(x,4)/(1*1*2*3*4);
 s += a4;
 printf("%.2f\t%.2f\t%.2f\n",x,a4,s);

 a5 = (1+x)*pow(x,5)/(1*1*2*3*4*5);
 s += a5;
 printf("%.2f\t%.2f\t%.2f\n",x,a5,s);

 a6 = (1+x)*pow(x,6)/(1*1*2*3*4*5*6);
 s += a6;
 printf("%.2f\t%.2f\t%.2f\n",x,a6,s);

 a7 = (1+x)*pow(x,7)/(1*1*2*3*4*5*6*7);
 s += a7;
 printf("%.2f\t%.2f\t%.2f\n",x,a7,s);

 a8 = (1+x)*pow(x,8)/(1*1*2*3*4*5*6*7*8);
 s += a8;
 printf("%.2f\t%.2f\t%.2f\n",x,a8,s);
}


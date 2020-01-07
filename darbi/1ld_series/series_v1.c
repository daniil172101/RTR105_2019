#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,a0,a1,a2,a3,a4,a5,a6,a7,a8,s0,s1,s2,s3,s4,s5,s6,s7,s8;
 
 y = (1+x)*exp(x);
 printf("%.2f\t%.2f\n",x,y);

 a0 = (1+x)*pow(x,0)/(1);
 s0 = a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a0,s0);

 a1 = (1+x)*pow(x,1)/(1*1);
 s1 = a0 + a1;
 printf("%.2f\t%.2f\t%.2f\n",x,a1,s1);

 a2 = (1+x)*pow(x,2)/(1*1*2);
 s2 = a2 + a1 + a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a2,s2);

 a3 = (1+x)*pow(x,3)/(1*1*2*3);
 s3 = a3 + a2 + a1 + a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a3,s3);

 a4 = (1+x)*pow(x,4)/(1*1*2*3*4);
 s4 =a4 + a3 + a2 + a1 + a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a4,s4);

 a5 = (1+x)*pow(x,5)/(1*1*2*3*4*5);
 s5 = a5 + a4 + a3 + a2 + a1 + a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a5,s5);

 a6 = (1+x)*pow(x,6)/(1*1*2*3*4*5*6);
 s6 =a6 + a5 + a4 + a3 + a2 + a1 + a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a6,s6);

 a7 = (1+x)*pow(x,7)/(1*1*2*3*4*5*6*7);
 s7 =a7 + a6 + a5 + a4 + a3 + a2 + a1 + a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a7,s7);

 a8 = (1+x)*pow(x,8)/(1*1*2*3*4*5*6*7*8);
 s8 =a8 + a7 + a6 + a5 + a4 + a3 + a2 + a1 + a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a8,s8);
}


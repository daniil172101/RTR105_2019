// s0,s1,s2,s3 -> s
#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,a,s;
 
 y = sin(x);
 printf("%.2f\t%.2f\n",x,y);

 a = pow(-1,0)*pow(x,2*0+1)/(1);
 s = a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);
 
 a *= pow(-1,1)*pow(x,2)/(1*2*(2*1+1));
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a *= pow(-1,1)*pow(x,2)/(2*2*(2*2+1));
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 a *= pow(-1,1)*pow(x,2)/(3*2*(2*3+1));
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);
}


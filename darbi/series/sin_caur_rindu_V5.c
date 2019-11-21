#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,i,a,s;
 
 y = sin(x);
 printf("%.2f\t%.2f\n",x,y);

 a = pow(-1,0)*pow(x,2*0+1)/(1);
 s = a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 for(i=1; s != y; i++){
 a *= pow(-1,1)*pow(x,2)/(i*2*(2*i+1));
 s += a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,s);

 } 

}


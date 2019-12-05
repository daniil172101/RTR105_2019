#include<stdio.h>
#include<math.h>
float function(float x, float x1);
void main(){
 float a=0.,b=2*M_PI,x=0.,x1=0.,delta_x=1.e-1,y1=0.,y2=0.;

 printf("\tx\t\tf(x)\t\tf\'(x)\n");
 x = a;
 while(x<b){
  printf("%10.2f\t%13.2f\t%13.2f\n",x,y1,y2/delta_x);
  x += delta_x;//x = + delta_x;
  x1= x + delta_x;
  y2= function(x,x1);
  y1 = sin(x)*sin(x)*cos(x)*cos(x);
 }
}
float function(float x,float x1){
float y;
 y= (sin(x1)*sin(x1)*cos(x1)*cos(x1))-(sin(x)*sin(x)*cos(x)*cos(x));
	return y;
}

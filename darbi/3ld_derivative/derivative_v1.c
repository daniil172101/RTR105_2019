#include<stdio.h>
#include<math.h>
float function1(float x, float x1);
float function2(float x, float x1);
void main(){
 float a=0.,b=2,x=0.,x1=0.,delta_x=1.e-1,y1=0.,y2=0.,y3=0.,y4=0.,y5=0.;
 FILE *fp = fopen("./derivative.dat", "w");

  printf("Lietotājs,lūdzu, ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Lietotājs,lūdzu, ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Lietotājs,lūdzu, ievadi precizitāti: ");
  scanf ("%e", &delta_x);

 fprintf(fp,"\tx\t\tf(x)\t\tf\'(x)\t\tf\"(x)\t\tf\'(x)\t\tf\"(x)\n");
 x = a;
 while(x<b){
  fprintf(fp,"%10.2f\t%13.2f\t%13.2f\t%13.2f\t%13.2f\t%13.2f\n",x,y1,y2,y3,y4/delta_x,y5/delta_x);
  x += delta_x;//x = + delta_x;
  x1= x + delta_x;
  y1 = (1+x)*exp(x);//analytic
  y2 = (2+x)*exp(x);//analytic
  y3 = (3+x)*exp(x);//analytic
  y4= function1(x,x1);//forward difference
  y5= function2(x,x1);//forward difference
 }
 fclose(fp);
}
float function1(float x,float x1){
float y;
 y= ((1+x1)*exp(x1))-((1+x)*exp(x));
	return y;
}
float function2(float x,float x1){
float y;
 y= ((2+x1)*exp(x1))-((2+x)*exp(x));
	return y;
}

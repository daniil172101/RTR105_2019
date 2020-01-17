#include<stdio.h>
#include<math.h>
void data_table_in_file(int i,float a,float b, float delta_x);
float function1(float x, float x1,float delta_x);
float function2(float x, float x1,float x2,float delta_x);
void main(){
 int k;
 float a=0.,b=0.,x,delta_x=1.e-1;

  printf("Lietotājs,lūdzu, ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Lietotājs,lūdzu, ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Lietotājs,lūdzu, ievadi precizitāti: ");
  scanf ("%e", &delta_x);

  x=a;
  while(x<=b){
  x+= delta_x;
  k++;
  }
 data_table_in_file(k,a,b,delta_x);
}
float function1(float x,float x1, float delta_x){
float y;
 y= (x1-x)/delta_x;
	return y;
}
float function2(float x, float x1,float x2,float delta_x){
float y;
 y= (x2-2*x1+x)/(delta_x*delta_x);
	return y;
}

void data_table_in_file(int k,float a,float b, float delta_x){
int i,j=k+1,c=k+2;
float x[c],y1[c],y2[k],y3[k],y4[j],y5[k];
 FILE *fp = fopen("./derivative.dat", "w");
 fprintf(fp,"\tx\t\tf(x)\t\tf\'(x)\t\tf\"(x)\t\tf\'(x)\t\tf\"(x)\n");

 for(i=0;i<c;i++){
 if (i==0)
  x[i]=a;
 else
  x[i] = x[i-1] + delta_x;
 y1[i] = (1+x[i])*exp(x[i]);//analytic
 }

for(i=0;i<j;i++)
 y4[i]= function1(y1[i],y1[i+1],delta_x);//forward difference


 for(i=0;i<k;i++){
 y2[i] = (2+x[i])*exp(x[i]);//analytic
 y3[i] = (3+x[i])*exp(x[i]);//analytic
 y5[i] = function2(y1[i],y1[i+1],y1[i+2],delta_x);//forward difference

 fprintf(fp,"%10.2f\t%13.2f\t%13.2f\t%13.2f\t%13.2f\t%13.2f\n",x[i],y1[i],y2[i],y3[i],y4[i],y5[i]);
 }
 fclose(fp);
}

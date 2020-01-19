#include<stdio.h>
#include<math.h>
void data_table_in_file(int k,float a,float b, float delta_x);
double function(double x, double x1,double delta_x);

void main(){
 int k=0;
 float a=0.,b=0.,x,delta_x=1.e-1;

  printf("Lietotājs,lūdzu, ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Lietotājs,lūdzu, ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Lietotājs,lūdzu, ievadi precizitāti: ");
  scanf ("%e", &delta_x);

  x=a;
  while(x<=b){
  k++;
  x+= delta_x;
  }
 data_table_in_file(k,a,b,delta_x);
}
double function(double x, double x1,double delta_x){
float y;
 y= (x1-x)/delta_x;
	return y;
}

void data_table_in_file(int k,float a,float b, float delta_x){
int i;
float x[k],y1[k],y2[k],y3[k],y4[k],y5[k];
 FILE *fp = fopen("./derivative.dat", "w");
 fprintf(fp,"\tx\t\tf(x)\t\tf\'(x)\t\tf\"(x)\t\tf\'(x)\t\tf\"(x)\n");

 for(i=0;i<k;i++){
 if (i==0)
  x[i]=a;
 else
  x[i] = x[i-1] + delta_x;
 y1[i] = (1+x[i])*exp(x[i]);//analytic
 y2[i] = (2+x[i])*exp(x[i]);//analytic
 y3[i] = (3+x[i])*exp(x[i]);//analytic
 }

 for(i=0;i<(k-1);i++)
  y4[i]= function(y1[i],y1[i+1],delta_x);//forward difference


 for(i=0;i<(k-2);i++)
  y5[i] = function(y2[i],y2[i+1],delta_x);//forward difference
  for(i=0;i<k;i++)
   fprintf(fp,"%10.2f\t%13.2f\t%13.2f\t%13.2f\t%13.2f\t%13.2f\n",x[i],y1[i],y2[i],y3[i],y4[i],y5[i]);
 fclose(fp);
}

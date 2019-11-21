#include <stdio.h>
#include <math.h>


int main()
{
 double a,delta_x,x,b,y;
 FILE *fp = fopen("./sin_data.dat", "w");
 a = 0;
 b = 2*M_PI;

 x = a;
 delta_x = 0.1;
 while (x<b){
  fprintf(fp,"%10.1f",x);
  fprintf(fp,"%20.1f\n",y);
  x += delta_x;
  y = sin(x);
 }
 fclose(fp);
 return 0;
}



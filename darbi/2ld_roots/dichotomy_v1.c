#include<stdio.h>
#include<math.h>

int main() {
 float a,c ,b ,x ,delta_x,funkca, funkcb, funkcx;
 int i=0;

  printf("Funkcijas saknes aprēķināšana: \n");

  printf("Lietotājs,lūdzu, ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Lietotājs,lūdzu, ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Lietotājs,lūdzu, ievadi precizitāti: ");
  scanf ("%e", &delta_x);

  printf("Lietotājs,lūdzu, ievadi, kādam y tu vari aprēķināt x: ");
  scanf ("%f", &c);
  funkca = (1+a)*exp(a) - c; funkcb = (1+b)*exp(b) - c;

  printf("(1+%7.3f)*exp(%7.3f) - %7.3f =%7.3f\t\t\t\t\t\t\t",a,a,c,funkca);
  printf("(1+%7.3f)*exp(%7.3f) - %7.3f =%7.3f\n",b,b,c,funkcb);

 while ((b-a)>delta_x){
  x = (a+b)/2.;
  if(funkca*((1+x)*exp(x)-c)>0)
   a = x;
  else
   b = x;
  printf("(1+%7.3f)*exp(%7.3f) - %7.3f =%7.3f\t",a,a,c,funkca);
  printf("(1+%7.3f)*exp(%7.3f) - %7.3f =%7.3f\t",x,x,c,funkcb);
  printf("(1+%7.3f)*exp(%7.3f) - %7.3f =%7.3f\n",b,b,c,(1+x)*exp(x)-c);
   i++;
 }

 printf("\nIteraciju skaits: %d\n",i);
 printf("Sākne atrodas pie x=%.5f, jo (1+x)*exp(x) ir %.3f\n",x,(1+x)*exp(x));
 return 0;
}

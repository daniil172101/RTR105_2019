#include<stdio.h>
#include<math.h>

int main() {
 float a=0.01,c,b =0.7*M_PI, x, delta_x=1.e-5/*0.00001*/,funkca, funkcb, funkcx;
 int i=0;
  printf("Kādam y tu vari aprēķināt x?\n");
  scanf("%f",&c);
  funkca = sin(a) - c; funkcb = sin(b) - c;
 if (funkca*funkcb>0){
  printf("Intervālā [%.2f;%.2f] sin(x) funkcijai ", a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;
 }
  printf("sin(%7.3f) - %7.3f =%7.3f\t\t\t\t",a,c,sin(a)-c);
  printf("sin(%7.3f) - %7.3f =%7.3f\n",b,c,sin(b)-c);

 while ((b-a)>delta_x){
  x = (a+b)/2.;
  if(funkca*(sin(x)-c)>0) // pie a=0 -> funkca=0 -> reizinājums precīzi ir 0
   a = x;
  else
   b = x;
  printf("sin(%7.3f) - %7.3f =%7.3f\t",a,c,sin(a)-c);
  printf("sin(%7.3f) - %7.3f =%7.3f\t",x,c,sin(x)-c);
  printf("sin(%7.3f) - %7.3f =%7.3f\n",b,c,sin(b)-c);
   i++;
 }

 printf("intervāls ir sašaurināts %d reizēs\n",i);
 printf("Sākne atrodas pie x=%.3f, jo sin(x) ir %.3f\n",x,sin(x));
 return 0;
}

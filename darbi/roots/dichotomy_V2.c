#include<stdio.h>
#include<math.h>

int main() {
 float a=0.01,x2, b =1.5*M_PI, x, delta_x=1.e-5/*0.00001*/,funkca, funkcb, funkcx;
 int i=0;
 printf("Kādam y ir jāatrod x?\n");
 scanf("%f",&x2);
  funkca = sin(a)-x2; funkcb = sin(b)-x2;
 if (funkca*funkcb>0){
  printf("Intervālā [%.2f;%.2f] sin(x) funkcijai ", a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;
 }
  printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
  printf("sin(%7.3f)=%7.3f\n",b,sin(b));

 while ((b-a)>delta_x){
  x = (a+b)/2.;
  if(funkca*sin(x)>0) // pie a=0 -> funkca=0 -> reizinājums precīzi ir 0
   a = x;
  else
   b = x;
  printf("sin(%7.3f)=%7.3f\t",a,sin(a));
  printf("sin(%7.3f)=%7.3f\t",x,sin(x));
  printf("sin(%7.3f)=%7.3f\n",b,sin(b));
   i++;
 }

 printf("intervāls ir sašaurināts %d reizēs\n",i);
 printf("Sākne atrodas pie x=%.3f, jo sin(x) ir %.3f\n",x,sin(x));
 return 0;
}

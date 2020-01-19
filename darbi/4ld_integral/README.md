<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratorijas darbs Nr.4. - Skaitliskā integrēšana - atskaite

## Teorija
Lai aprēķinātu integrāļus, var izmantot dažādus paņēmienus.
Lai aprēķinātu integrāļus, kodā es izmantoju trīs paņēmienus: taisnstūra metodi, trapeču metodi un Simpsona metodi.
Lai saprast un izmantot šis metodus, es izmantoju sekojošus informācijas avotus:

https://en.wikipedia.org/wiki/Trapezoidal_rule
https://en.wikipedia.org/wiki/Simpson%27s_rule
https://en.wikipedia.org/wiki/Riemann_sum
  
### Kods
```
#include<stdio.h>
#include<math.h>
float f(float x);
void main(){
 int k,n=2,m=1;
 float a=0.,b=0,h,delta_x=0,int1=0.,int2=0.,int3=0.;

  printf("Integrāļu aprēķināšana:\n");

  printf("Lietotājs,lūdzu, ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Lietotājs,lūdzu, ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Lietotājs,lūdzu, ievadi precizitāti: ");
  scanf ("%e", &delta_x);

  int2 = (b-a)*(f(a)+f(b))/2.;

 while(fabs(int2 - int1)>delta_x){
  n*=2;
  h=(b-a)/n;
  int1=int2;
  int2=0.;
 for(k=0;k<n;k++) int2+=h*f(a+(k+0.5)*h);
 }
 printf("\nintegrālis, aprēķināts ar taisnstūru metodi: %.5f\n",int2);

 int1 =0;
 int2 = (b-a)*(f(a)+f(b))/2.;
 while(fabs(int2 - int1)>delta_x){
  m*=2;
  n=2*m;
  h=(b-a)/n;
  int1=int2;
  int2=0.;
 for(k=1;k<=m-1;k++) int2+=2.*(2*f(a+(2*k-1)*h)+f(a+2*k*h));
 int2+=f(a)+f(b)+4*f(b-h);
 int2*=h/3;
 }
 printf("integrālis, aprēķināts ar Simpsona metodi: %.5f\n",int2);

 n =2;
 int1 =0;
 int2 = (b-a)*(f(a)+f(b))/2.;
 while(fabs(int2 - int1)>delta_x){
  n*=2;
  h=(b-a)/n;
  int1=int2;
  int2=0.;
 for(k=1;k<n;k++) int2+=f(a+(k)*h);
 int2+=(f(b)+f(a))/2;
 int2*=h;
 }
 printf("integrālis, aprēķināts ar trapeču metodi: %.5f\n",int2);

}

float f(float x){
 float y1;
 y1 = (1+x)*exp(x);
 return y1;
}

```  

### Rezultāts
```
Integrāļu aprēķināšana:
Lietotājs,lūdzu, ievadi sākuma robežu: 0
Lietotājs,lūdzu, ievadi beigas robežu: 2
Lietotājs,lūdzu, ievadi precizitāti: 1.e-5

integrālis, aprēķināts ar taisnstūru metodi: 14.77812
integrālis, aprēķināts ar Simpsona metodi: 14.77811
integrālis, aprēķināts ar trapeču metodi: 14.77811

```

### Analīze
Izpildot šo kodu, man sanāca, ka programma aprēķinā integrāļus pareizi, izmantojot visus trīs metodus.  

### Attēli

![Attēls no WolframAlpha](https://github.com/daniil172101/RTR105_2019/blob/master/darbi/4ld_integral/WolframAlpha_image.png)
![Funkcijas grafiks](https://github.com/daniil172101/RTR105_2019/blob/master/darbi/4ld_integral/funkcijas_grafiks.png)


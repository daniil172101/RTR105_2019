<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratory work Nr.2. - Roots - report

## Theory
Izmantojot Teilora rundu, var vieglāk atrast funkcijas vērtību, aizstājot funkciju ar pakāpes serijas summu.   

### Code
```
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

```
Comments about code  

### Result
```
Funkcijas saknes aprēķināšana: 
Lietotājs,lūdzu, ievadi sākuma robežu: 0
Lietotājs,lūdzu, ievadi beigas robežu: 15
Lietotājs,lūdzu, ievadi precizitāti: 1.e-5
Lietotājs,lūdzu, ievadi, kādam y tu vari aprēķināt x: 26.69
(1+  0.000)*exp(  0.000) -  26.690 =-25.690							(1+ 15.000)*exp( 15.000) -  26.690 =52304252.000
(1+  0.000)*exp(  0.000) -  26.690 =-25.690	(1+  7.500)*exp(  7.500) -  26.690 =52304252.000	(1+  7.500)*exp(  7.500) -  26.690 =15341.671
(1+  0.000)*exp(  0.000) -  26.690 =-25.690	(1+  3.750)*exp(  3.750) -  26.690 =52304252.000	(1+  3.750)*exp(  3.750) -  26.690 =175.285
(1+  1.875)*exp(  1.875) -  26.690 =-25.690	(1+  1.875)*exp(  1.875) -  26.690 =52304252.000	(1+  3.750)*exp(  3.750) -  26.690 = -7.943
(1+  1.875)*exp(  1.875) -  26.690 =-25.690	(1+  2.812)*exp(  2.812) -  26.690 =52304252.000	(1+  2.812)*exp(  2.812) -  26.690 = 36.794
(1+  1.875)*exp(  1.875) -  26.690 =-25.690	(1+  2.344)*exp(  2.344) -  26.690 =52304252.000	(1+  2.344)*exp(  2.344) -  26.690 =  8.153
(1+  2.109)*exp(  2.109) -  26.690 =-25.690	(1+  2.109)*exp(  2.109) -  26.690 =52304252.000	(1+  2.344)*exp(  2.344) -  26.690 = -1.059
(1+  2.109)*exp(  2.109) -  26.690 =-25.690	(1+  2.227)*exp(  2.227) -  26.690 =52304252.000	(1+  2.227)*exp(  2.227) -  26.690 =  3.214
(1+  2.109)*exp(  2.109) -  26.690 =-25.690	(1+  2.168)*exp(  2.168) -  26.690 =52304252.000	(1+  2.168)*exp(  2.168) -  26.690 =  1.000
(1+  2.139)*exp(  2.139) -  26.690 =-25.690	(1+  2.139)*exp(  2.139) -  26.690 =52304252.000	(1+  2.168)*exp(  2.168) -  26.690 = -0.048
(1+  2.139)*exp(  2.139) -  26.690 =-25.690	(1+  2.153)*exp(  2.153) -  26.690 =52304252.000	(1+  2.153)*exp(  2.153) -  26.690 =  0.471
(1+  2.139)*exp(  2.139) -  26.690 =-25.690	(1+  2.146)*exp(  2.146) -  26.690 =52304252.000	(1+  2.146)*exp(  2.146) -  26.690 =  0.210
(1+  2.139)*exp(  2.139) -  26.690 =-25.690	(1+  2.142)*exp(  2.142) -  26.690 =52304252.000	(1+  2.142)*exp(  2.142) -  26.690 =  0.080
(1+  2.139)*exp(  2.139) -  26.690 =-25.690	(1+  2.141)*exp(  2.141) -  26.690 =52304252.000	(1+  2.141)*exp(  2.141) -  26.690 =  0.016
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.141)*exp(  2.141) -  26.690 = -0.016
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.141)*exp(  2.141) -  26.690 = -0.000
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.140)*exp(  2.140) -  26.690 =  0.008
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.140)*exp(  2.140) -  26.690 =  0.004
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.140)*exp(  2.140) -  26.690 =  0.002
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.140)*exp(  2.140) -  26.690 =  0.001
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.140)*exp(  2.140) -  26.690 =  0.000
(1+  2.140)*exp(  2.140) -  26.690 =-25.690	(1+  2.140)*exp(  2.140) -  26.690 =52304252.000	(1+  2.140)*exp(  2.140) -  26.690 =  0.000

Iteraciju skaits: 21
Sākne atrodas pie x=2.14005, jo (1+x)*exp(x) ir 26.690

```

### Analysis
Comments about results  

### Figures


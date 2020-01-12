<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratory work Nr.1. - Taylor series - report

## Theory
Izmantojot Teilora rundu, var vieglāk atrast funkcijas vērtību, aizstājot funkciju ar pakāpes serijas summu.   

### Code
```
#include<stdio.h>
#include<math.h>

void main(){
 long double x,y,a,s;
 int k=0;

 printf("Funkcijas (1+x)*exp(x) aprēķināšana: \n");
 printf("Lietotājs, lūdzu, ievadi x vērtību: ");
 scanf("%Lf",&x);
 y = (1+x)*exp(x);
 printf("(1 + %.2Lf)*exp(%.2Lf) = %.2Lf\n",x,x,y);

 a = (1+x)*pow(x,0)/(1);
 s += a;

 while (k<1000)
 {
  if (k == 0)
   printf("a0 = %Le\tS0 =%.2Lf\n",a,s);
  k++;
  a = a*x/(k);
  s += a;
  if (k == 999)
   printf("a999 = %Le\tS999 =%.2Lf\n",a,s);
 }
 printf("a1000 = %Le\tS1000 =%.2Lf\n",a,s);

 printf("\n");
 printf("\t\t1000\n");
 printf("\t\t----\n");
 printf("\t\t\\\t\t        k\n");
 printf("\t\t \\\t\t(1+x)*x\n");
 printf("f(x)=\t\t|\t    ----------------\n");
 printf("\t\t /\t\t   k!\n");
 printf("\t\t/\n");
 printf("\t\t----\n");
 printf("\t\tk=0\n");

 printf("\n");
 printf("\t\t\tx\n");
 printf("R=\t\t   -----------\n");
 printf("\t\t\tk\n");
}


```
Comments about code  

### Result
```
Funkcijas (1+x)*exp(x) aprēķināšana: 
Lietotājs, lūdzu, ievadi x vērtību: 2.05
(1 + 2.05)*exp(2.05) = 23.69
a0 = 3.050000e+00	S0 =3.05
a999 = 0.000000e+00	S999 =23.69
a1000 = 0.000000e+00	S1000 =23.69

		1000
		----
		\		        k
		 \		(1+x)*x
f(x)=		|	    ----------------
		 /		   k!
		/
		----
		k=0

			x
R=		   -----------
			k

```

### Analysis
Comments about results  

### Figures


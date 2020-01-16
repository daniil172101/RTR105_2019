<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratory work Nr.3. - Derivative - report

## Theory
Izmantojot Teilora rundu, var vieglāk atrast funkcijas vērtību, aizstājot funkciju ar pakāpes serijas summu.   

### Code
```
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


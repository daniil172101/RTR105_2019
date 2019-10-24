#include<stdio.h>

 void sorting (int, int, int);

 void main ()
 {
 int a,b,c;
 printf("Cienijāmais lietotāj, lūdzu, ievadi trīs skaitļus:");
 scanf("%d, %d, %d",&a,&b,&c);
 sorting(a, b, c);
 }

 void sorting (int x, int y, int z)
 {
 int i;
 if (x>y && x>z)
  if (y>z);
 else {i=z;z=y;y=i;}

 if (y>x && y>z)
  if (x>z)
   {i=y;y=x;x=i;}
 else {i=x; x=y; y=i; i=y; y=z; z=i;}

 if (z>x && z>y)
  if (x>y)
   {i=x;x=z;z=i;i=z;z=y;z=i;}
 else  {i=x; x=z; z=i;}
 printf("Kārtošana augoša secība: %d, %d ,%d\n",z,y,x);
 }

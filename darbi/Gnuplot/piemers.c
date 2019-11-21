#include <stdio.h>

void main()
{
 int d[10];
 int i,x,y;

 x=0;
 for (i=0;i<10;i++){
  printf("%d ",x);
  y = x*x;
  printf("%d\n",y);
  x++;
 }

}



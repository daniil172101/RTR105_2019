#include<stdio.h>
#include<string.h>


void main()
{
 char str[50];
 int i,x,y;
 printf("Lūdzu, ievadiet teikumu : ");
 scanf("%[^\n]s", str);
 for (i= 0;str[i] != '\0';i++){
  if (str[i] == ' ' && str[i+1] != ' ')
   x++;
 }
 if (str[i-1]!=' ')
  x++;
 printf("Teikumam bija %d vārdi \n",x);
}

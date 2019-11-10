#include<stdio.h>
#include<string.h>


void main()
{
 char s[51], str[50];
 int i,x,y,r,b;
 printf("Lūdzu, ievadiet teikumu : ");
 scanf("%[^\n]s", str);
 for (i= 0;str[i] != '\0';i++){
  if (str[i] == ' ' && str[i+1] != ' ')
   x++;
 }
 for (i = 0;str[i] != '\0';i++){
  if (str[i] == ' ' && str[i+1] != ' ')
   b = i;
 }
 if (str[0] == ' ')
  x--;
 if (str[i-1]!=' ')
  x++;
 printf("Teikumam bija %d vārdi \n",x);
 printf("Teikumam bija %d vārdi, kuri ir vienādi vai garāki par 5 simboliem \n",y);
}

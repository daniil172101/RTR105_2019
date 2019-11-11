#include<stdio.h>
#include<string.h>


int main()
{
 char str[50];
 long int b,i,x,y;
 y = b = 0;
 printf("Lūdzu, ievadiet teikumu : ");
 scanf("%[^\n]s", str);
 for (i= 0;str[i] != '\0' ;i++){
  if (str[i] == ' ' && str[i+1] != ' '){
   x++;
 }
 }
 if (str[0] == ' ')
  x--;
 if (str[i-1]!=' ')
  x++;
 i= 0;
while(str[i] != '\0')
{
 if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
  ++b;
 if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
  b--;
 if (b == 5)
  ++y;
 if (str[i] == ' ')
  b = 0;
 ++i;
}
 printf("Teikumam bija %d vārdi \n",x);
 printf("Teikumam bija %d vārdi, kuri ir vienādi vai garāki par 5 simboliem \n",y);
 return 0;
}



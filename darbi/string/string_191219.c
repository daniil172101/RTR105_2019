#include<stdio.h>
#include<string.h>


int main()
{
 char str[50], str2[50];
 char i = 0, x = 0,min=0,max=0,j=0,buf=0;
 long int av =0, med = 0, len = 0;
 printf("Lūdzu, ievadiet teikumu : ");
 scanf("%[^\n]s", str);
 strcpy(str2,str);
 len = strlen(str);
 min=str[0];
 max=str[0];
 for (i= 0;str[i] != '\0' ;i++){
  x=str[i];
  if (x < min)
   min = x;
  if (x > max)
   max = x;
   av+=x;
 }
 for (i= 0;i < len - 1;i++){ 
  for (j= i+1; j < len;j++){ 
   if (str2[i] > str2[j]){
    buf = str2[i];
    str2[i] = str2[j];
    str2[j] = buf;
   }
  }
 }
  if (len%2 == 1)
   med = str[len/2+1];
  if (len%2 == 0){
   med = str[len/2]+str[len/2+1];
   med /=2;
  }
 av/=len;

 printf("Simbolu rindas  - %s\n",str);

 printf("Simbolu rindas 2v - %s\n",str2);

 printf("Simbolu rindas garums - %ld\n",len);
 printf("Vidēja vērtība - %ld\n",av);
 printf("Min = %d\n",min);
 printf("Max = %d\n",max);
 printf("Med = %ld\n",med);
 return 0;
}



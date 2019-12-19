#include<stdio.h>
#include<string.h>


int main()
{
 char str[50], str2[50],str3[50];
 char i = 0, x = 0,min=0,max=0,j2=0,j=0,buf=0,y=0,c=0;
 long int av =0, med = 0, len = 0;
 printf("Lūdzu, ievadiet teikumu : ");
 scanf("%[^\n]s", str);
 strcpy(str2,str);
 len = strlen(str);
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
   med = str2[len/2+1];
  if (len%2 == 0){
   med = str2[len/2]+str2[len/2+1];
   med /=2;
  }
 av/=len;
 max=str2[j-1];
 min=str2[0];

 printf("Simbolu rindas 2v - %s\n",str2);
 for (i= 0;str[i] != '\0' ;i++){
  x=str[i];
   av+=x;
 printf("%d ",str2[i]);
 }
 for (i= 0;str2[i] != '\0' ;i++){
 x = str2[i];
 for (j= i;str2[j] != '\0' ;j++){
  if (str2[i] == x)
   ++y;
 }
 if (y2 < y){
   y2 = y;
  c = str[i];
  }
 }
 printf("\n");
 for (i= 0;str2[i] != '\0' ;i++){
 x = str2[i];
 for (j= i;str2[j] != '\0' ;j++){
  if (str2[i] == x)
   ++y;
 }
 if (y2 == y){
  c = str[i];
  }
 }

 printf("Simbolu rindas garums - %ld\n",len);
 printf("Vidēja vērtība - %ld\n",av);
 printf("Min = %d\n",min);
 printf("Max = %d\n",max);
 printf("Med = %ld\n",med);
 return 0;
}



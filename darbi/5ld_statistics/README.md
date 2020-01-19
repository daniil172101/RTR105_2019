<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratorijas darbs Nr.5. - Statistika - atskaite

## Teorija
Ja ir vajadzīgi izpildīt kādas statistikas uzdevumus vai kārtošanu, mēs varam izmantot C valodu.
Lai tas paradītu, es uzrakstīju programmu, kura kārto un atrod modu, mediānu, vidējo, minimālo un maksimālo simbolu vērtību(pēc ASCII tabulas) ievadītai simbolu rindai.    

### Kods
```
#include<stdio.h>
#include<string.h>

void main()
{
 char str[50], str2[50];
 char i = 0, moda = 0, x = 0,min=0,max=0,j=0,buf=0;
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

 printf("Simbolu rindas simboli alfabēta kārtībā - %s\n",str2);
 for (i= 0;str[i] != '\0' ;i++){
  x=str[i];
   av+=x;
 printf("%d ",str2[i]);
 }
 j=0;

 printf("Simbolu rindas garums - %ld\n",len);
 printf("Vidēja vērtība - %ld\n",av);
 printf("Min = %d\n",min);
 printf("Max = %d\n",max);
 printf("Med = %ld\n",med);

 for (i=0;len > i ;i++){
 if (str2[i] == str2[i+1])
  j++;
 else if (str2[i] != str2[i+1])
  if(j > moda){ moda = j;
   j=0;
  }
 }
 j=0;

 for (i=0;len > i ;i++){
 if (str2[i] == str2[i+1])
  j++;
 else if (str2[i] != str2[i+1]){
 if (moda==j){
   printf("Ievadītas rindas moda ir %d\n", str2[i]);
   printf("----------------------------------\n");
 }
 j=0;}
}
}

```  

### Rezultāts
```
Lūdzu, ievadiet teikumu : area
Simbolu rindas simboli alfabēta kārtībā - aaer
97 97 101 114 Simbolu rindas garums - 4
Vidēja vērtība - 409
Min = 97
Max = 114
Med = 107
Ievadītas rindas moda ir 97
----------------------------------

```

### Analīze
Izpildot kodu, man sanāca, ka programma pareizi izpilda visus aprēķinus un arī pareizi sakārto simbolus alfabēta secībā.

### Attēls

![Histogramma](https://github.com/daniil172101/RTR105_2019/blob/master/darbi/5ld_statistics/statistika.png)


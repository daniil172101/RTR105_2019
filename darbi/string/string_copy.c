#include<stdio.h>
#include<string.h>


void main()
{
 char rinda_1[50],rinda_2[50];
 printf("Enter word: ");
 scanf("%s", rinda_1);
 strcpy(rinda_2, rinda_1);
 printf("You have written: %s\n", rinda_2);
}

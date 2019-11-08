#include<stdio.h>

void main()
{
 float c;
 int i,j;
 FILE *fp = fopen("./file.txt", "w");
 float a[5][2];
 float b[5][3];
 printf("Ievadiet 10 reālus skaitļus:\n");
  for (i=0;i<5;i++)
   for (j=0;j<2;j++){
	 printf("Ievadiet skaitli [%d][%d] laukā: ",i,j);
	 scanf("%f",&c);
	 a[i][j]= c;
  }

  for (i=0;i<5;i++)
   for (j=0;j<2;j++){
         if (fp != NULL)
		if (j != 1)
		 fprintf(fp,"%f ",a[i][j]);
		else
		 fprintf(fp,"%f\n",a[i][j]);
  }
 fclose(fp);
 fopen("./file.txt", "r");
  for (i=0;i<5;i++)
   for (j=0;j<2;j++){
	 fscanf(fp,"%f",&b[i][j]);
  b[i][2]=b[i][0] * b[i][1];
  }
 printf("Rezultāts:\n");
  for (i=0;i<5;i++)
   for (j=0;j<3;j++){
	 printf("%f ",b[i][j]);
	 if (j==2)
	  printf("\n");
 }
 fclose(fp);
}

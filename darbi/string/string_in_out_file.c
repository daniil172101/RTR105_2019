#include<stdio.h>
#include<string.h>


void main()
{
 char text[100];
 FILE *fp = fopen("./file.txt", "w");
 printf("Enter the string to write :");
 scanf("%[^\n]s\n", text);
 if (fp != NULL)
  fprintf(fp,"%s\n",text);
 fclose(fp);
 fopen("./file.txt", "r");
 while(1)
    {
       if(fgets(text, 100, fp) ==NULL)
            break;
       else
            printf("%s", text);
    }
 fclose(fp);
}

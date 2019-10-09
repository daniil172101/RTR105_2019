#include <stdio.h>
void main()
{
	char a = 10;
	int sz = sizeof(a);
	char b = 12;

	printf("Char aiznem %d baitus\n",sz);
	printf("operācija <<:%d ^ %d rezultāts %d\n",a,b,a^b);
}

#include <stdio.h>
void main()
{
	char a = 10;
	int sz = sizeof(a);

	printf("Char aiznem %d baitus\n",sz);
	printf("operācija <<: ~%d rezultāts %d\n",a,~a);

	char b;
	b = ~a;
	printf("operācija <<: ~%d  rezultāts %d\n",a,b);

}

#include <stdio.h>
void main()
{
	char a = 5;
	int sz = sizeof(a);
	char b ;

	b = a;
	printf("Char aiznem %d baitus\n",sz);
	printf("operācija <<: %d += %d  rezultāts %d\n",a,b,a +=b );//Same as : a = a+b - a is 10.
	printf("operācija <<: %d -= %d  rezultāts %d\n",a,b,a -=b );//Same as : a = a-b - a is 5.
	printf("operācija <<: %d *= %d  rezultāts %d\n",a,b,a *=b );//Same as : a = a*b - a is 25.
	printf("operācija <<: %d /= %d  rezultāts %d\n",a,b,a /=b );//Same as : a = a/b - a is 5.
	printf("operācija <<: %d %= %d  rezultāts %d\n",a,b,a %=b );//Same as : a = a%b - a is 0.
}

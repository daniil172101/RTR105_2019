#include <stdio.h>
void main()
{
	char a = 10;
	printf("operācija <<: %d <<1 rezultāts %d\n",a,a<<1);

	char b;
	printf("b mainīga \"sākumā\" stāvoklis (uzreiz pēc deklarēšanas); ");

	b=a<<2;
	printf("operācija <<: %d <<2 rezultāts %d\n",a,b);

	char c;
	printf("Papētīsim << operāciju\n---------------------------\n");
	printf("Cienījamais lietotāj, lūdzu, ievadi operacijas 1. operandu: ");
	scanf("%d", &a);
	printf("Cienījamais lietotāj, lūdzu, ievadi operacijas 2. operandu: ");
	scanf("%d", &c);
	b=a<<c;
	printf("---------------------------\nSkaties, kas ir sanācis: %d\n",b);
}

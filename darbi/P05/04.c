#include <stdio.h>

int fun() {
	char x = 13 + 32;
	char delta = 8;
	x = x + delta;
	return x;
}

int main() {
	char x = 13 + 32;
	printf("Pirms, %c \n", x);
	//Sheit paraadaas burts - jo mainiigajam x pieshkjir veertiibu 32 + 13 = 45

	fun();
	printf("Peec 1 reizes, %c \n", x);
	//Peec 1. reizes paraadaas burts - jo ...

	fun();
	printf("Peec 2 reizeem, %c \n", x);
	//Peec 2. reizes paraadaas burts - jo ...
}

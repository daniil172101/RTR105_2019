#include <stdio.h>

char x;

int fun() {
	char delta = 8;
	x = x + delta;
	return x;
}

	int main() {
	x = 13 + 32;
	printf("Pirms, %c \n", x);
	//Sheit paraadaas burts - jo mainiigajam x pieshkjir veertiibu 13 + 32 = 45

	fun();
	printf("Peec 1 reizes, %c \n", x);
	//Peec 1. reizes paraadaas burts 5 jo mainiigam x pieshkjira veertiibu 45 + 8 = 53

	fun();
	printf("Peec 2 reizeem, %c \n", x);
	//Peec 2. reizes paraadaas burts ... jo mainiigajam x piesh kjir veertiibu 53 + 8 = 61
}

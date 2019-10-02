/* Programmas autors: Daniils Surmacs
 Programma sanjem datus ( vienu simbolu ) no konsoles
un izvada uz ekrana kaa simbolu */

	#include <stdio.h>

	int main () // Taa ir galvenaa C programmas f-ja
{
	printf (" Ievadi simbolu :"); // Dialoga izvade
	char abc; // Tiek deklareets mainigais abc
	scanf ("%c", &abc ); // klaviaturas dati tiek iekopeeti

	printf ("%c \n", abc ); // Shii ir mainigaa abc formateetaa
	// izdruka uz ekraana . Dati tiek izvadiiti kaa SIMBOLS
	printf ("%d \n", abc );
	printf ("%x \n", abc );
}

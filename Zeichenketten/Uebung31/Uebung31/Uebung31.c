#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char eingabe[255];

	printf("Geben sie einen String ein: ");
	fgets(eingabe, 255, stdin);

	printf("Der String ist:\n%s", eingabe);

	system("pause");
	return 0;
}
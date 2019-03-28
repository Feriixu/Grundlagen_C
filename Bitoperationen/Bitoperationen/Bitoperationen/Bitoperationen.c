#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, stelle, bitstelle;
	printf("Bitte geben sie eine Ganzzahl ein: ");
	scanf("%i", &a);
	printf("Bitte geben sie noch eine Ganzzahl ein: ");
	scanf("%i", &b);
	printf("Bitte geben sie eine zu pruefende Stelle ein: ");
	scanf("%i", &stelle);
	bitstelle = stelle << (stelle-1);

	system("Pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int startwert;
	int input = 0;
	printf("Geben sie einen Startwert ein:\n");
	scanf("%i", &startwert);
	do
	{
		scanf("%i", input);
		startwert -= input;
	} while (startwert >= 0);
	printf("Die 0 wurde unterschritten\nDer verbleibende Wert ist %i", startwert);
	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int zahl1, zahl2;
	printf("Geben sie Zahl 1 ein: ");
	scanf("%i", &zahl1);
	printf("Geben sie Zahl 2 ein: ");
	scanf("%i", &zahl2);
	if ((zahl1 % zahl2) == 0)
	{
		printf("Die Zahlen sind durcheinander teilbar\n");
	}
	else
	{
		printf("Die Zahlen sind nicht durcheinander teilbar\n");
	}
	system("Pause");
	return 0;
}
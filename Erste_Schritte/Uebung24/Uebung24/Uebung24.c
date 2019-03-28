#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Summand 1 eingeben!\n");
	int iSummand1;
	scanf("%i", &iSummand1);
	printf("Summand 2 eingeben!\n");
	int iSummand2;
	scanf("%i", &iSummand2);
	int iSumme = iSummand1 + iSummand2;
	printf("Die Summe von %i und %i ist %i.\n", iSummand1, iSummand2, iSumme);
	system("Pause");
	return 0;
}
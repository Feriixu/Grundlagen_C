#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int gewicht;
	double preis;
	printf("Bitte geben sie das Gewicht in Gramm ein: ");
	scanf("%i", &gewicht);
	if (gewicht >= 500)
	{
		preis = 2.00;
	} 
	else 
		if (gewicht >= 50)
		{
			preis = 1.44;
		}
		else 
			if (gewicht >= 20)
			{
				preis = 0.9;
			}
			else
			{
				preis = 0.55;
			}
	printf("Sie müssen %f bezahlen\n", preis);
	system("Pause");
	return 0;
}
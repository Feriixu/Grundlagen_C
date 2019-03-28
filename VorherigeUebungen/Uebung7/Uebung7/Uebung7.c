#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	//Aufgabe 1
	bool repeat = true;
	int input;
	do
	{
		printf("-----------------------\nGeben sie die 4711 ein:\n");
		scanf("%i", &input);
		if (input == 4711)
		{
			printf("Sehr gut weiter zum naechsten Teil!\n");
			repeat = false;
		}
		else
		{
			printf("Probiere es noch einmal!\n");
		}
	} 
	while (repeat);
	//Aufgabe 2
	system("Pause");
	printf("Geben sie die Anzahl der Vielfachen ein:\n");
	int zahl1;
	scanf("%i", &zahl1);
	printf("Geben sie die Zahl ein von der die Vielfache angezeigt werden sollen ein:\n");
	int zahl2;
	scanf("%i", &zahl2);
	for (int i = 1; i < 1+zahl1; i++)
	{
		printf("%i\n", zahl2*i);
	}
	system("Pause");
	printf("Geben sie einen Startwert ein:\n");
	int startwert;
	scanf("%i", &startwert);
	do
	{
		scanf("%i", input);
		startwert -= input;
	} while (startwert >= 0);
	printf("Die 0 wurde unterschritten\nDer verbleibende Wert ist %i", startwert);
	system("Pause");

}
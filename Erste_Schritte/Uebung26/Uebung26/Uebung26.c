#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int fahrenheit;
	int celsius = 0;
	int testArray[] = { 1,2,3,4,5 };
	for (int i = 0; i < sizeof(testArray)/sizeof(testArray[0]); i++)
	{
		printf("%i\n", testArray[i]);
	}
	printf(sizeof(testArray));

	system("Pause");
}

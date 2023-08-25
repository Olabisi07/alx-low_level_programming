#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful return
*/

int main(void)
{
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	printf("%ld, %ld", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		printf(", %ld", fibonacci[i]);
	}

	printf("\n");

	return (0);
}

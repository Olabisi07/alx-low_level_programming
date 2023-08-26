#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0
*/

int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 98; count++)
	{
		c = a + b;

		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}


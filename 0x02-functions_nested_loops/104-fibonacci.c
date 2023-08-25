#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0
*/

int main(void)
{
	int i;

	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int fib_next;

	printf("%lu, %lu", fib1, fib2);

	for (i = 2; i < 98; i++)
	{
		fib_next = fib1 + fib2;

		printf(", %lu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}


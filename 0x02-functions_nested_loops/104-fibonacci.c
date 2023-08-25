#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0
*/

int main(void)
{
	int i;

	long unsigned int fib1 = 1;
	long unsigned int fib2 = 2;
	long unsigned int fib_next;

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


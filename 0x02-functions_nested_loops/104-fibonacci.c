#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0
*/

int main(void)
{
	int i;

	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int fib_next;

	printf("%llu, %llu", fib1, fib2);

	for (i = 2; i < 98; i++)
	{
		fib_next = fib1 + fib2;

		printf(", %llu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}


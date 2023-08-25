#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
 *
*/


int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 5 == 0) || (n % 3 == 0))
		{
			sum += n;
		}
	}

	printf("%d\n", sum);

	return (0);
}


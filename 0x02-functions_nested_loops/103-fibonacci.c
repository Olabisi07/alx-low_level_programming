#include <stdio.h>

/**
 * main - add fibonacci up to 4million
 *
 * Return: return 0
*/

int main(void)
{
	long int prev = 1;
	long int curr = 2;
	long int next;
	long int sum = 2;

	while (1)
	{
		next = prev + curr;

		if (next > 4000000)
		{
			break;
		}

		if (next % 2 == 0)
		{
			sum += next;
		}

		prev = curr;
		curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}


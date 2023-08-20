#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
 *
*/

int main(void)
{
	int i, sum = 0;

	for (int i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}


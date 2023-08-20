#include <stdio.h>

/**
 * print_times_table -this will print the n times table
 * @n:this is the number for which to print the times table
*/

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				printf("%d", result);

			else
				printf(", %3d", result);
		}
		printf("\n");
	}
}

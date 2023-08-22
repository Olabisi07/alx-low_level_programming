#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array
 * @a: The integer array
 * @n: The number of elements to print
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

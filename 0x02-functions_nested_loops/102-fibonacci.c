#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
 *
*/

int main(void) 
{
	int n;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] =2;

	printf("%1d, %1d, ", fibonacci[0], fibonacci[1]);

	for (n = 2; n < 50; n++) 
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];

		if (n == 49)
		{
			printf("%1d\n", fibonacci[n]);
		}
		else
		{
			printf("%1d, ", fibonacci[n]);
		}
	}

	return (0);
}


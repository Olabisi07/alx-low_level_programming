#include <stdio.h>
#include <stdlib.h>
the compiler recognized the function that are used in this library
#include <time.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
 *
*/

int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n",
		       n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n",
		       n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d is 0\n",
		       n, n % 10);
	}

	return (0);
}


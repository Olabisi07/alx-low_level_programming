#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
 *
*/

int main(void) 
{
	int num1 = 1, num2 = 2, nextTerm;

	printf("%d, %d", num1, num2);

	for (int i = 3; i <= 50; i++) 
	{
		nextTerm = num1 + num2;
		printf(", %d", nextTerm);
		num1 = num2;
		num2 = nextTerm;
	}

	printf("\n");
	return (0);
}


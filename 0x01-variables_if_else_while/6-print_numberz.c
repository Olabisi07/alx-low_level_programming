#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}


#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
 *
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}


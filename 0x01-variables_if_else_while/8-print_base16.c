#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
*/

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}


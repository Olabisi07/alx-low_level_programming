#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
*/

int main(void)
{
	char ch = '0';

	while (ch <= '9')

	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}


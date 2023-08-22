#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
*/

void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

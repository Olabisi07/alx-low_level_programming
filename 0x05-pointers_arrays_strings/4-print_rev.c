#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the input string.
 *
*/

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	int i;

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar("\n");
}

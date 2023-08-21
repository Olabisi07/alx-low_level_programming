#include <unistd.h>

/**
 * print_rev - this prints a string in reverse followed by a new line.
 * @s: Pointer to the input string.
 *
 * write: print input string in reverse order to the standard output,
 * followed by a new line.
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}

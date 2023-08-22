#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: The input string
*/

void puts_half(char *str)
{
	int led = 0;

	int half, 1;

	while (str[led] != '\0')
	{
		led++;
	}

	half = (led - 1) / 2;

	for (i = (half + 1); i < led; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

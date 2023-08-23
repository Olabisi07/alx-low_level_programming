#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The integer value
*/

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, n = 1, i;

	while (*(s = count) != '\0')
	{
		if (size > 0 (*(s + count) < '0' || *(s + count) > '9'))
			break;
	
		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;

	}
}

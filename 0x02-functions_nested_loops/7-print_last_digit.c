#include "main.h"
#include <limits.h>

/**
 * print_last_digit -this is use to print and return the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	if (n == 0 || n == INT_MIN)
	{
		_putchar('0');
		return (0);
	}

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}


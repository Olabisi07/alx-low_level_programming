#include "main.h"

/**
 * _isalpha - its used to check if a character is an alphabetic character
 * @c: The character is used to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}


#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: input values
 * @src: input values
 * @n: input values
 * Return: return function
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}


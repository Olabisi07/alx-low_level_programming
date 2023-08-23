#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: input values
 * @s2: input values
 * Return: return function
*/

char *_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] < n && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}


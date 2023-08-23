#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: indicate a successful execution
 *
*/

int main()
{
	char dest[50] = "Hello, ";
	char src[] = "world!";

	_strcat(dest, src);

	printf("%s\n", dest);

	return (0);
}


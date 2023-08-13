#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This is the main function that serves as the entry point of the program.
 *
 * Return: indicating successful execution
 */
int main(void)
{
	printf("Size of char: %1u byte(s)\n", sizeof(char));
	printf("Size of int: %1u byte(s)\n", sizeof(int));
	printf("Size of long int: %1u byte(s)\n", sizeof(long int));
	printf("Size of long long int: %1u byte(s)\n", sizeof(long long int));
	printf("Size of float: %1u byte(s)\n", sizeof(float));

	return (0);
}


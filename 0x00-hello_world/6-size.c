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
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	
	return (0);
}


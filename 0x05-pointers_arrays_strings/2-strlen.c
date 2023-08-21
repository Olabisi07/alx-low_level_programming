/**
 * _strlen - this is use to return the length of a string.
 * @s: Pointer to the input string.
 *
 *Return:  This function calculates and returns the length of the input string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')

	{
		length++;
		s++;
	}
	return (length);
}


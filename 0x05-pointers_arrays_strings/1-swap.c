/**
 * swap_int -it is use to swap the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function takes two pointers to integers as parameters and swaps
 * the values of the integers they point to.
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


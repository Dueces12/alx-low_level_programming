#include "main.h"
/**
 * swap_int - swaps the first integer value with the second one`s c value
 * @a : first integer value
 * @b : second integer value
 * Returns value a and b
 **/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

#include "main.h"
/**
 * reverse_array - reverse content of arrays
 * @a : holds first value
 * @n : holds second value
 * Return : void
 */
void reverse_arary(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

#include "main.h"
/**
 * print_line - prints a line
 *
 * @n : number of times of _ should be print
 */
void print_line(int n)
{

	if (n < 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
		{
			_putchar('_');
		}

		_putchar('_');
	}
}

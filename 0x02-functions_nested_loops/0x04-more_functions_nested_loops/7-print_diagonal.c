#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, l;

		for (i = 0; i < n; i++)
		{
			for (l = 0; l < n; l++)
			{
				if (l == i)
					_putchar('\\');
				else if (l < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

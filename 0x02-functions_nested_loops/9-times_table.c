#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, l, m;

	for (i = 0; i < 10; i++)
	{
		for (l = 0; l < 10; l++)
		{
			m = l * i;
			if (l == 0)
			{
				_putchar(m + '0');
			}

			if (m < 10 && l != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

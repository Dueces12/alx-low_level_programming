#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return void
 */
void more_numbers(void)
{
	int c, k;

	for (c = 1 ; c <= 10 ; c++)
	{
		for (k = 0 ; k <= 14 ; k++)
		{
			_putchar(k);
		}
	}
	_putchar('\n');
}
/** come back to one*/

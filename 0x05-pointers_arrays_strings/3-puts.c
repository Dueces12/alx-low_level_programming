#include "main.h"
/** _puts - prints to standard output followed by a new line
 * @str : hold value to be printed
 * Returns *str
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

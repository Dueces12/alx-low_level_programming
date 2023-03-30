#include "main.h"
/** rev_string - prints string in reverse
 * @s : value to be printed in reverse
 * returns *s
 */
void rev_string(char *s)
{
	int i = 0;
	int k = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n')

}

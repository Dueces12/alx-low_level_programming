#include "main.h"
/*
 * print_rev - prints value in reverse
 * @s : holds the value that needs to be printed
 * return: 0
 */
void print_rev(char *s)
{
	int count = 0;
	int count1;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (count1 = count; count1 > 0; count1--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

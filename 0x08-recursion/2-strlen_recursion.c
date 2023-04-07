#include "main.h"
/*
 * _strlen_recursion - get lenght of string
 * @s : string
 * Return : lenght of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i +  _strlen_recursion(s + 1);

	}
	return (i);
}

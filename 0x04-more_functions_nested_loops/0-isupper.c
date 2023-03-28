#include "main.h"
/**
 * _isupper -checks for uppercase characters
 * Return: 0 ot 1
 *@c:is the checker variable
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"
/*
 * factorial - return the factorial of a given number
 * Return : -1 if n is less then 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

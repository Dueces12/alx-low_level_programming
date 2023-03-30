#include "main.h"
#include <unistd.h>
/**
 * _putchar - write to standatd output
 * @c : Holds the value of be printed
 * Return 1 when successfull
 * Return -1 when error is encountered
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

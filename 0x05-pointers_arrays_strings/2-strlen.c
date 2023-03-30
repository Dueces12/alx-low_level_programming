#include "main.h"
#include <stdio.h>
/** _strlen - gives the lenght of a string
 * @s :hold the value which lenght is going to be calculate
 *Return 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

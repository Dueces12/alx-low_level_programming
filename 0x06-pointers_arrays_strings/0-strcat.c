#include "main.h"
/**
 * *_strcat - concatonates 2 strings
 * @dest : holds first string value;
 * @src : holds second string value;
 * Returns: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	l = 0;
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}

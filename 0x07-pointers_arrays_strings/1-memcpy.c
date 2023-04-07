#include "main.h"
/*
 * _memcpy - copies memory area
 * @dest : holds the copied value
 * @src :holds the value to be copied
 * @n : holds how many times a value needs to be copied
 * Returns: copied values ,n number of times
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; j > i; j++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

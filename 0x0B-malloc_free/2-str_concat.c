#include "main.h"
#include <stdlib.h>
/*
 * str_concat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * Return : concatonation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i = 0;
	int c = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[c] != '\0')
	{
		c++;
	}
	conc = malloc(sizeof(char)*(i+c+1));

	if (conc == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		conc[i] =s[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		conc[i] = '\0';
		i++, c++;
	}
	conc[c] = '\0'
	return (conc);
}

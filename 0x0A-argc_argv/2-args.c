#include <stdio.h>
#include "main.h"
/*
 * main - prints arguments it receives
 * @argc : counter of arguments
 * @argv : array of arguments
 * Return : Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printd("%s\n", argv[i])
	}
	return (0);
}

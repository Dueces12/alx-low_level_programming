#include <stdio.h>
#include "main.h"
/*
 * main - prints thenumber of arguments passed to it
 * @argc : counter of arguments
 * @argv : array of arguments
 * Return : 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

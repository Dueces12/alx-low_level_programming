#include "main.h"
#include "stdio.h"
/**
 * main - prints number 1 - 100 followed by a newline
 * multiples of 3 Fizz is printed
 * multiples of 5 Buzz is printed
 * multiples of both print FizzBuzz
 * Return 0 
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}

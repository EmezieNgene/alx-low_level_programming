#include <stdio.h>

/**
 * main - prints all single digit numbers in base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int n;
	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}


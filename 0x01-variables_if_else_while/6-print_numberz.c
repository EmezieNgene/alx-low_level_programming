#include <stdio.h>

/**
 * main - print every single digit number in base 10 starting from 0
 * You can only use putchar
 * Return: 0
 */
int main(void)
{
	int n = 48;
	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	putchar("\n");
	return (0);
}

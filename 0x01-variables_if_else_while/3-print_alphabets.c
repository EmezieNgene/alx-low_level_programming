#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uippercase
 * You can only use putchar
 * Return: 0
 */

int main (void)
{
	int lwc = 'a';
	int upc = 'A';
	while (lwc <= 'z')
	{
		putchar(lwc);
		lwc += 1;
	}
	while (upc <= 'Z')
	{
		putchar(upc);
		upc += 1;
	}
	putchar('\n');
	return (0);
}

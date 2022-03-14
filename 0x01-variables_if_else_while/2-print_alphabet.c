#include <sstdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a newline
 * Return: 0 (success)
 */

int main(void)
{
	int i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');
	return (0);
}

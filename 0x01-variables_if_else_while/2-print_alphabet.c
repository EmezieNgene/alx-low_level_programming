#include <sstdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a newline
 * Return: 0
 */
int main(void)
{
	int i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i ++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * main - prints _putchar 
 * Description: prints _putchar to the screen and moves to a new line 
 *Return: 0
 */

int main(void)
{
	char text[9] = "_putchar";
	int n = 0;

	for (n = 0; n < 8; n++)
	{
	_putchar(text[n]);
	}
_putchar('\n');

	return (0);
}

#include "main.h"

/**
 * main: print_rev - prints a string in reverse order
 * Description: Prints a string in reverse order e,g prints Tally as yllaT
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		{
		len++;
		}

	while (len)
		{

		_putchar(s[--len]);
		}

	_putchar('\n');
}

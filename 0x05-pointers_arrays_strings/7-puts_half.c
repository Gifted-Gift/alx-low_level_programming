#include "main.h"

/**
 * main: puts_half - prints half of a string, followed by a new line
 * Description: A function that prints half of string, followed by a new line
 * @str: string to print the last half of
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;

	int half;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)

		half = len / 2;

	else
		half = (len + 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);

		half++;
	}

	_putchar('\n');
}

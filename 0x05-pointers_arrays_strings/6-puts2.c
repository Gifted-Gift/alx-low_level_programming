#include "main.h"

/**
 * main: puts2 - prints every other character of a string
 * Description: A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string to puts2
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)

			_putchar(str[len]);

		len++;
	}

	_putchar('\n');
}

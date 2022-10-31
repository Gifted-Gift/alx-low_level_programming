#include "main.h"
#include <unistd.h>

/**
 * main:: _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on success
 * -1 is returned on error, and ernno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * main: rev_string - fxn that reverses a string followed by a new line.
 * Description: void reverse a string, followed by a new line
 * @s: an input string
 * Return: Void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;

	char aux;

	while (s[len] != '\0')
		{
		len++;
		}

	while (i < len--)
	{
		aux = s[i];

		s[i++] = s[len];

		s[len] = aux;
	}

}

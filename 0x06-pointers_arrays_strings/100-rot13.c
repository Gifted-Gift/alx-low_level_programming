#include "main.h"

/**
 * main: rot13 - function to encode a string using rot13.
 * Description: function that encodes a string using rot13.
 * Prototype: char *rot13(char *);
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * @s: An input string to encode using rot13
 * Return: An encode string
 */

char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];

				break;
			}
		}

		s++;
	}
	return (ptr);
}

#include "main.h"

/**
 * main:string_toupper-function to changes all lowercase letters of a string
 * Description: a function that changes all lowercase letters
 * of a string to uppercase.
 * Prototype: char *string_toupper(char *);
 * to upper case
 * @s: an input string
 * Return: char pointer to convert string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{

		if (*s >= 'a' && *s <= 'z')

			*s -= 32;

		s++;

	}
	return (start);
}

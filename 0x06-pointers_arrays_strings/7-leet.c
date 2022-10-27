#include "main.h"

/**
 * main: leet - a function that encodes a string into 1337.
 * Description: function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Prototype: char *leet(char *);
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * @s: an input string to encode
 * Return: An encode string
 */

char *leet(char *s)
{
	int i = 0, j;

	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},

	      str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)

			if (s[i] == str[j])

				s[i] = subs[j];

		i++;
	}
	return (s);
}

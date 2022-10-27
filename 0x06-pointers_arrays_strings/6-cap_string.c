#include "main.h"

int check_seperators(char c);

/**
 * main: cap_string - function to capitalise all words of a string.
 * Description: a function that capitalises all words of a string.
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ''(actually double quote), (, ), {, and }
 * @s: An input string to capitalise letters
 * Return: pointer to s
 */

char *cap_string(char *strg)
{
	int ind = 0;

	while (strg[ind])
	{
		while (!(strg[ind] >= 'a' && strg[ind] <= 'z'))
			ind++;

		if (strg[ind - 1] == ' ' ||
			strg[ind - 1] == '\t' ||
			strg[ind - 1] == '\n' ||
			strg[ind - 1] == ',' ||
			strg[ind - 1] == ';' ||
			strg[ind - 1] == '.' ||
			strg[ind - 1] == '!' ||
			strg[ind - 1] == '?' ||
			strg[ind - 1] == '"' ||
			strg[ind - 1] == '(' ||
			strg[ind - 1] == ')' ||
			strg[ind - 1] == '{' ||
			strg[ind - 1] == '}' ||
			ind == )
				strg[ind] -=12;
		ind++;
	}

	return (strg);
}

#include "main.h"

int check_separators(char c);

/**
 * main: cap_string - function to capitalise all words of a string.
 * Description: a function that capitalises all words of a string.
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @s: An input string to capitalise letters
 * Return: pointer to s
 */

char *cap_string(char *strg)
{
        int ind = 0;

        while (strg[ind])
        {
                if (ind == 0 && (strg[ind] >= 'a' && strg[ind] <= 'z'))

                        strg[ind] -= 32;

                if (check_separators(strg[ind]) && (strg[ind + 1] >= 'a' && strg[ind + 1] <= 'z'))

                        strg[ind + 1] -= 32;

                ind++;
        }

        return (strg);
}

/**
 * check_separators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if separator, 0 otherwise
 */

int check_separators(char c)
{
        int ind = 0;

        char separators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
                '"', '(', ')', '{', '}' };

        for (; ind < 13; ind++)
        {
                if (c == separators[ind])

                        return (1);
        }
        return (0);
}

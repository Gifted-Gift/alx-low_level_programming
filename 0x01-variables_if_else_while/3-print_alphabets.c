#include <stdio.h>

/**
* main - print letters in uppercase and lowercase
* Description: print and go to a newline
* Return: 0 if accurately executed
*/
int main(void)
{
	char letter;

	char LETTER;

	for (letter = 'a'; letter <= 'z'; ++letter)

		putchar(letter);

	for (LETTER = 'A'; LETTER <= 'Z'; ++LETTER)

		putchar(LETTER);

	putchar('\n');

return (0);
}

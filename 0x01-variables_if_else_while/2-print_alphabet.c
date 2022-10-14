#include <stdio.h>

/**
* main - print alphabets
* Description: print letters in lower cases with putchar
* Return: 0 after execution
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)

		putchar(letter);

	putchar('\n');

	return (0);
}

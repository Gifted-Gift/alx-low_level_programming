#include <stdio.h>

/**
* main - print out alphabets in lower case
* Description: print all lower case letters except q and e with putchar
* Return: 0 once executed
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)

		if (letter != 'q' && letter != 'e')

		{
			putchar(letter);
		}

	putchar('\n');

	return (0);
}

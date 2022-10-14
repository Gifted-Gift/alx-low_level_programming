#include <stdio.h>

/**
* main - print possible combinations of digits 0 to 9
* Description: print 0 to 9
* Return: 0 after execution
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; ++digit)

	{
		putchar((digit % 10) + '0');

		if (digit == 9)

			continue;

		putchar(',');

		putchar(' ');

	}

	putchar('\n');

	return (0);
}

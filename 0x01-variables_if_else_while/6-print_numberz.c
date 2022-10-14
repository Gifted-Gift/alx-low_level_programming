#include <stdio.h>

/**
* main - print single digit numbers at base 10
* Description: print 0 to 9
* Return: 0 if executed
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; ++digit)

		putchar((digit % 10) + '0');

	putchar('\n');

	return (0);
}

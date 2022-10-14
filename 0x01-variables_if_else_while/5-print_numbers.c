#include <stdio.h>

/**
* main - print single digit numbers of base 10
* Description: print 0 to 9
* Return: 0 after execution
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; ++digit)

		printf("%d", digit);

	putchar('\n');

	return (0);
}

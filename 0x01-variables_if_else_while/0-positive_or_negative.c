#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
* main - checks negative or positive of random numbers
* Description: generate random numbers and tells us it's sign
* Return: it returns 0 after executing
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
	/* your code goes there */

	return (0);
}

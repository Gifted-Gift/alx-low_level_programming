#include "main.h"

/**
 * largest_number - program that prints the largest of three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest = b;
if (a > b)
{
largest = a;
}
else if (c > b)
{
largest = c;
}

return (largest);

}

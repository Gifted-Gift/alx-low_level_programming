#include <unistd.h>

/**
* main - print to standard error
* Description: print texts to standard error instead of stdout
* Return: 0 after running
*/
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, 59);

	return (1);
}

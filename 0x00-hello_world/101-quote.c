#include <stdio.h>
#include <unistd.h>

/**
 * main - print to standard output without the use of printf and puts
 *
 * Return: 1 (Success)
 *
 */

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}

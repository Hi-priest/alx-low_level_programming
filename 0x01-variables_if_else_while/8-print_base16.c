#include <stdio.h>

/**
 * main -  program prints numbers of base 10 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

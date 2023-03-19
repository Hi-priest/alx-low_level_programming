#include <stdio.h>

/**
 * main - program prints single digit of base 10
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}

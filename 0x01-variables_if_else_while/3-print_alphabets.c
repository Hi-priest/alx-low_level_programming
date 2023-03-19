#include <stdio.h>

/**
 * main - program prints alphabets in lowercase and then uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;
	char I;

	{
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	}
	{
	for (I = 'A'; I <= 'Z'; I++)
		putchar(I);
	putchar('\n');
	}
	return (0);
}


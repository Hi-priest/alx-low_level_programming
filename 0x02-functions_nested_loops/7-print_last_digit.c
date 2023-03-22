#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @a: integer checker
 * Return: 0 (success)
 */
int print_last_digit(int a)
{
	int i;

	if (a < 0)
		a = -a;
	i = a % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}

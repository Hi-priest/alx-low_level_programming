#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 * Return: Aways 0 (success)
 */

void jack_bauer(void)
{
	int i, x;

	i = 0;

	while (i < 24)
	{
		x = 0;
		while (x < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
			x++;
		}
		i++;
	}
}

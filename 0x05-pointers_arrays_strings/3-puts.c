#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by new line, to stdout
 *  @str: string to be printed
 *  Return: 0
 */

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

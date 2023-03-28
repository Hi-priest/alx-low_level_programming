#include "main.h"

/**
 * swap_int - function swaps the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

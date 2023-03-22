#include "main.h"

/**
 * _islower - checks for lowercase
 *@c: is the character to be checked if lowercase
 * Return: 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

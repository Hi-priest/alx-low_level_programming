#include "main.h"
/**
 * _isupper - checks for characters in uppercase
 * @c: character checker
 * Return: 0 or 1 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

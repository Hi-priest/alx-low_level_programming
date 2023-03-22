#include "main.h"

/**
 * _isalpha - checks for letter, lower or uppercase
 * @c: the character to be checked
 * Return: Always 1 (success)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

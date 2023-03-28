#include "main.h"

/**
 * _strlen - fuction returns the length of a string
 * @s: string length
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

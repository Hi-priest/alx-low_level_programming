#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

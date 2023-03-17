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

	printf("Size of a char: %c 1 byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %u 4 byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %f 4 byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

#include "main.h"

/**
 * print_rev - reverse print
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int long;
	int c = 0;

	while (*s != '\0')
	{
		long++;
		s++;

	}
	s--;

	for (c = long; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

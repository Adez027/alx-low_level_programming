#include "main.h"

/**
 * print_rev - reverse print
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi;
	int c = 0;

	while (*s != '\0')
	{
		longi++;
		s++;

	}
	s--;

	for (c = longi; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd leng, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, n, leng;

	leng = 0;
	for (i = 0; str[i] != '\0'; i++)
		leng++;

	n = (leng / 2);
	if ((leng % 2) == 1)
		n = ((leng + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

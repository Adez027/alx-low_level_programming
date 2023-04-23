#include <stdio.h>

/**
 * main - Print more alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;

	for (m = 97; m <= 122; m++)
	{
		putchar(m);
	}
	for (n = 65; n <= 90; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

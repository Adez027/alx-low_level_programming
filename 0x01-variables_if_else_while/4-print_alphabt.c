#include <stdio.h>

/**
 * main - Except 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
	}
	putchar('\n');
	return (0);
}

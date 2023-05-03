#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < (n - 1); s++)
	{
		printf("%d, ", a[s]);
	}

	if (s == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

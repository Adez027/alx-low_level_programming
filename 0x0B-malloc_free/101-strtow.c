#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, z;

	flag = 0;
	z = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}
	return (z);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int q, r = 0, len = 0, words, p = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (q = 0; q <= len; q++)
	{
		if (str[q] == ' ' || str[q] == '\0')
		{
			if (p)
			{
				end = q;
				tmp = (char *)malloc(sizeof(char) * (p + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[r] = tmp - p;
				r++;
				p = 0;
			}
		}
		else if (p++ == 0)
			start = q;
	}
	matrix[r] = NULL;
	return (matrix);
}

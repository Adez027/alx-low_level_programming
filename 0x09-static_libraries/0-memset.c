#include "main.h"
/**
 * _memset - a function to fill memory with a constant byte
 * @s: starting address
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int e;
for (e = 0; n >= 1; ++e)
{
s[e] = b;
--n;
}
return (s);
}

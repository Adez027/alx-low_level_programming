#include "main.h"
/**
 * _memcpy - a function to copy memory area
 * @dest:memory area copied to
 * @src: memory area copied from
 * @n: bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j = n;
for (i = 0; i < j; i++)
{
dest[i] = src[i];
--n;
}
return (dest);
}

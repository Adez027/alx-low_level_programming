#include "main.h"
/**
 * *_strchr - a function to locate a character in a string
 * @s: input
 * @c: input
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
int r = 0;
for (; s[r] >= '\0'; r++)
{
if (s[r] == c)
return (&s[r]);
}
return (0);
}

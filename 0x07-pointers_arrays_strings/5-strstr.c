#include "main.h"
#include <stddef.h>
/**
 * *_strstr - a function that locates a substring
 * @haystack: input
 * @needle: substring
 * Return: a pointer to substring, or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0';  haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
if (*two == '\0')
return (haystack);
}
return (0);
}

#include "main.h"
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: minimum range of value stored
*@max: maximum range of value stored
*Return: pointer tothe new array
*/
int *array_range(int min, int max)
{
int *ptr, k, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (k = 0; min <= max; k++)
ptr[k] = min++;
return (ptr);
}

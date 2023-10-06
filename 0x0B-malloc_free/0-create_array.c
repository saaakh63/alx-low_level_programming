#include "main.h"
/**
* create_array - entry point
*
* @c: false or true validation
* @size: ffff
*Return: 0 (success)
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == NULL)
		return (0);
	while (size--)
		ptr[size] = c;
	return (ptr);
}


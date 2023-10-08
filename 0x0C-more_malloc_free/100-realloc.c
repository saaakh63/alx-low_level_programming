#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - entry point
*
* @ptr: false or true validation
* @new: ffff
* @old: ddddddddddd
*Return: 0 (success)
*/
void *_realloc(void *ptr, unsigned int old, unsigned int new)
{
	if (new == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new);

	if (new == old)
		return (ptr);

	free(ptr);
	ptr = malloc(new);

	return (ptr);
}

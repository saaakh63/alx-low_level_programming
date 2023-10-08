#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void *malloc_checked(unsigned int c)
{
	char *ch;

	ch = malloc(c);
	if (ch == NULL)
		exit(98);
	return (ch);
}

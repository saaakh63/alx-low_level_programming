#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - entry point
*
* @c: false or true validation
* @s: hkjk
*Return: 0 (success)
*/
void *_calloc(unsigned int c, unsigned int s)
{
	char *ch;
	unsigned int i;

	if (c == 0 || s == 0)
		return (NULL);

	ch = malloc(c * s);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < (c * s); i++)
		ch[i] = 0;

	return (ch);
}

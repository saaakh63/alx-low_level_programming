#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
char *_strdup(char *c)
{
	int i = 0, s = 0;
	char *ch;

	if (c == NULL)
		return (NULL);
	while (c[s])
		s++;
	ch = malloc(s * sizeof(*c) + 1);
	if (ch == 0)
		return (NULL);
	else
	{
		while (i < s)
		{
			ch[i] = c[i];
			i++;
		}
	}
	return (0);
}

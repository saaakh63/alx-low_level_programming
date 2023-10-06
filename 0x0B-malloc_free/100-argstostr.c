#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - entry point
*
* @c: false or true validation
* @a: dddd
*Return: 0 (success)
*/
char *argstostr(int c, char **a)
{
	char *t;
	int z, i, j, ia;

	if (c == 0)
		return (NULL);

	for (z = i = 0; i < c; i++)
	{
		if (a[i] == NULL)
			return (NULL);

		for (j = 0; a[i][j] != '\0'; j++)
			z++;
		z++;
	}

	t = malloc((z + 1) * sizeof(char));

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = j = ia = 0; ia < z; j++, ia++)
	{
		if (a[i][j] == '\0')
		{
			t[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < z - 1)
			t[ia] = a[i][j];
	}
	t[ia] = '\0';

	return (t);
}

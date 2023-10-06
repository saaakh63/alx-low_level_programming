#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - entry point
*
* @s1: false or true validation
* @s2: dddddddd
*Return: 0 (success)
*/
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i = 0, j = 0, k = 0;

	if (s1 != NULL)
	{
		while (s1[i])
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j])
		{
			j++;
		}
	}
	ch = malloc((i + j + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		ch[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		ch[k] = s2[k - i];
		k++;
	}
	ch[k + 1] = '\0';
	return (ch);
}

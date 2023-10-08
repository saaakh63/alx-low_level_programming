#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - entry point
*
* @s1: false or true validation
* @s2: ffffffffffff
* @n:ddddddddddddd
*
*Return: 0 (success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int is1 = 0, is2 = 0, is, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[is1])
		is1++;

	while (s2[is2])
		is2++;

	if (n > is2)
		n = is2;

	is = is1 + n;

	s = malloc(is + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < is; i++)
		if (i < is1)
			s[i] = s1[i];
		else
			s[i] = s2[i - is1];

	s[i] = '\0';

	return (s);
}

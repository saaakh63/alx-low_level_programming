#include "main.h"
/**
* _strpbrk - entry point
*
* @c: false or true validation
* @s: gggg
*Return: 0 (success)
*/
char *_strpbrk(char *s, char *c)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (c[i])
		{
			if (c[j] == s[i])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}

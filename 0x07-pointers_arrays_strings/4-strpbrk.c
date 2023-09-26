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
	char *x;

	while (s[i])
	{
		j = 0;
		while (c[j])
		{
			if (c[j] == s[i])
			{
				x = &s[i];
				return (x);
			}
			j++;
		}
		i++;
	}
	return (0);
}

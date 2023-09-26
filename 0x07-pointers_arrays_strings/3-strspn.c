#include "main.h"
/**
* _strspn - entry point
*
* @s: false or true validation
* @c: yyyyyyyyyy
*Return: 0 (success)
*/
unsigned int _strspn(char *s, char *c)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (c[j] != s[i])
		{
			if (c[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include "main.h"
/**
* _strstr - entry point
*
* @c: false or true validation
* @s: ssss
*Return: 0 (success)
*/
char *_strstr(char *s, char *c)
{

	int i = 0, j = 0, n = 0, z = 0;
	char *x;

	while (c[j])
		j++;
	while (s[i])
	{
		n = 0;
		while (c[n])
		{
			if (c[n] != s[i])
			{
				break;
			}
			z++;
			n++;
		}
		if (z == j)
			return (c);
		i++;
	}
	return (0);
}

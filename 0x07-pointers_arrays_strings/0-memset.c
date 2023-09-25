#include "main.h"
/**
* _memset - entry point
*
* @s: false or true validation
* @b: ddddddd
* @n: fffffffff
*Return: 0 (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (n--)
	{
		s[x] = b;
		x++;
	}
	return (s);
}

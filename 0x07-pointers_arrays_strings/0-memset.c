#include "main.h"
/**
* *_memset - entry point
*
* @s: false or true validation
* @b: ddddddd
* @n: fffffffff
*
*Return: 0 (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (n > 0)
	{
		s[x] = b;
		x++;
		n--;
	}
	return (s);
}

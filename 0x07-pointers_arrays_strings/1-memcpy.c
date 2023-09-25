#include "main.h"
/**
* _memcpy - entry point
*
* @dest: false or true validation
* @src: gfgjgj
* @n: dddd
*Return: 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

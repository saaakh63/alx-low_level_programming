#include "main.h"
/**
* *_strncat - entry point
*
* @dest: false or true validation
* @src: gggg
* @n: gggg
*Return: 0 (success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; i < n && src[j] != '\0'; j++)
		dest[i++] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

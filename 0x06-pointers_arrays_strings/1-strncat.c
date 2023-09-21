#include "main.h"
/**
* *_strcat - entry point
*
* @dest: false or true validation
* @src: gggg
* @n: gggg
*Return: 0 (success)
*/
char *_strcat(char *dest, char *src)
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

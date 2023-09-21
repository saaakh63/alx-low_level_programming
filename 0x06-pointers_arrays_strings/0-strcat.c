#include "main.h"
/**
* *_strcat - entry point
*
* @dest: false or true validation
* @src: gggg
*Return: 0 (success)
*/
char *_strcat(char *dest, char *src)
{
	int i ,j;

	i = 0;
	while (dest[0])
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i++] = src[j];
	return (dest);
}

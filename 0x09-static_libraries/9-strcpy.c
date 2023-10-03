#include "main.h"
/**
* *_strcpy - entry point
*
* @a: false or true validation
* @b: gjhkjh
*Return: 0 (success)
*/
char *_strcpy(char *a, char *b)
{
	int i = -1;

	do {
		i++;
		a[i] = b[i];
	} while (b[i] != '\0');
	return (a);
}

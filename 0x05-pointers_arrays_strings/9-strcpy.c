nclude "main.h"
/**
* *_strcpy - entry point
*
* @a: false or true validation
* @b: gjhkjh
*Return: 0 (success)
*/
char *_strcpy(char *a, char *b)
{
	int i = 0;

	do {
		a[i] = b[i];
		i++;
	} while (b[i] != '\0');
	return (a);
}

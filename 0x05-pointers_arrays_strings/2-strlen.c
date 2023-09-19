#include "main.h"
/**
*  _strlen - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
int  _strlen(char *c)
{
	int i;

	for (i = 0; *c != '\0'; c++)
		i++;
	return (i);
}

#include "main.h"
/**
* _strlen_recursion - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
int _strlen_recursion(char *c)
{
	int i;

	if (*c > '\0')
		i +=  _strlen_recursion(c + 1) + 1;
	return (i);
}

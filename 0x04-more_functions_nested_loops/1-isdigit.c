#include "main.h"
/**
* _isdigit - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
int _isdigit(int c)
{
	if (c <= 48 && c <= 58)
		return (1);
	return (0);
}

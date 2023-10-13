#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: dddd
 * @n: dddddddddddddd
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *ch;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(valist, char *);

		if (ch)
			printf("%s", ch);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}

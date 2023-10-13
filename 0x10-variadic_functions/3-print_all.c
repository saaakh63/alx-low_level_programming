#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: hhhhhhhhhhhhhhhh
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, z = 0;
	char *ch;
	const char arr[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (arr[j])
		{
			if (format[i] == arr[j] && z)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), z = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), z = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), z = 1;
			break;
		case 's':
			ch = va_arg(valist, char *), z = 1;
			if (!ch)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ch);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}

#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
*
* @argc: false or true validation
* @argv: ggg
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int s = 0;
	char *c;

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atio(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}

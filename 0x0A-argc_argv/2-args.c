#include <stdio.h>
/**
* main - entry point
*
* @argc: false or true validation
* @argv: ggg
*Return: 0 (success)
*/
int main(int argc, char const *argv[])
{
	int w = 0;

	while (argc--)
	{
		printf("%s\n", argv[w]);
		w++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
* Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index, bytes;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;
	index = 0;
	while (index < bytes)
	{
		if (index == bytes - 1)
		{
			printf("%02hhx\n", p[index]);
			break;
		}
		printf("%02hhx ", p[index]);
		index++;
	}
	return (0);
}

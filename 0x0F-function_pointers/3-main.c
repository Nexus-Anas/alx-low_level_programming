#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Entry point.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	p = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*p == '/' && num2 == 0) || (*p == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(p)(num1, num2));
	return (0);
}

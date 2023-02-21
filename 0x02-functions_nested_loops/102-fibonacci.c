#include <stdio.h>

/**
 * main - check the code
 * Return: int
 */
int main(void)
{
	int a = 0;
	unsigned long b = 0, c = 1, sum;

	while (a < 50)
	{
		sum = b + c;
		printf("%lu", sum);

		b = c;
		c = sum;
		if (a == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		++a;
	}
	return (0);
}

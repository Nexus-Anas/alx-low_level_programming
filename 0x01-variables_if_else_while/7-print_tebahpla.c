#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char myChar = 'z';

	while (myChar >= 'a')
	{
		putchar(myChar);
		myChar--;
	}
	putchar('\n');
	return (0);
}

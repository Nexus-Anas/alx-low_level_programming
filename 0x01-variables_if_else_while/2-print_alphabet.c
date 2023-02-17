#include <stdlib.h>
#include <time.h>
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
	char myChar = 'a';

	while (myChar <= 'z')
	{
		putchar(myChar);
		myChar++;
	}
	putchar('\n');
	return (0);
}

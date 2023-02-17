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
	char myChar2 = 'A';

	while (myChar <= 'z')
	{
		putchar(myChar);
		myChar++;
	}
	while (myChar2 <= 'Z')
	{
		putchar(myChar2);
		myChar2++;
	}
	putchar('\n');
	return (0);
}

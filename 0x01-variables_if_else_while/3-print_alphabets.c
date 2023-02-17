#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* print lowercase alphabet */
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	/* print uppercase alphabet */
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}


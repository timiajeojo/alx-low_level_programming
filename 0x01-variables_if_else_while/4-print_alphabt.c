#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, excluding 'q' and 'e'
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}


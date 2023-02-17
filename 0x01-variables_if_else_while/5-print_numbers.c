#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		char digit = num + '0';
		write(1, &digit, 1);
		num++;
	}
	write(1, "\n", 1);

	return (0);
}


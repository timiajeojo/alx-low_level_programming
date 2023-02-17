#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will assign a random number to the variable n each time it is
 * executed. It then prints the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n);

    if (n % 10 > 5)
    {
        printf("%d and is greater than 5\n", n % 10);
    }
    else if (n % 10 == 0)
    {
        printf("%d and is 0\n", n % 10);
    }
    else
    {
        printf("%d and is less than 6 and not 0\n", n % 10);
    }

    return (0);
}


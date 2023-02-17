#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n);

    if (n < 0)
        n *= -1;

    n = n % 10;

    if (n == 0)
        printf("0");
    else if (n > 5)
        printf("%d and is greater than 5\n", n);
    else
        printf("%d and is less than 6 and not 0\n", n);

    /* Example for n = 980 */
    n = 980;
    printf("Last digit of %d is ", n);

    n = n % 10;

    if (n == 0)
        printf("0");
    else if (n > 5)
        printf("%d and is greater than 5\n", n);
    else
        printf("%d and is less than 6 and not 0\n", n);

    /* Example for n = -98 */
    n = -98;
    printf("Last digit of %d is ", n);

    if (n < 0)
        n *= -1;

    n = n % 10;

    if (n == 0)
        printf("0");
    else if (n > 5)
        printf("%d and is greater than 5\n", n);
    else
        printf("%d and is less than 6 and not 0\n", n);

    return (0);
}


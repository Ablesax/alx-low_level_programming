#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -print whether the number is positive or negative.
 *
 * Return: 0 (success)
 */
int main(void)
{
int n;

srand(time(NULL));
n = rand() % 201 - 100;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n, n");
}
return (0);
}


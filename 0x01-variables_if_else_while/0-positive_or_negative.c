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
printf("%d", n);
srand(time(NULL));
n = rand() % 201 - 100;
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}


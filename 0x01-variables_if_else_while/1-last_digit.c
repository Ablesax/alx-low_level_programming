#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program will assign a random number to the variable
 * return 0
*/
int main(void)
{
int n;
srand(time(NULL));
n = rand() % 100;
int lastDigit = n % 10;
printf("The string Last digit of %d is ", n);
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}


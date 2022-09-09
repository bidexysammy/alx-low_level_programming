#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  this is important in every code
 *
 * Description: the main is where the compiling begins
 * Return: zero if success
 */
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}

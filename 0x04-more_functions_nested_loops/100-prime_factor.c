#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor
 *
 * Return: zero
 */
int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%1d\n", maxf);
	return (0);
}

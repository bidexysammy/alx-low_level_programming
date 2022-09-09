#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -  the main function must be present
 *
 * Description: every program must contain the main function
 * because it is where the program starts
 * Return: zero if success
 */
/*betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}

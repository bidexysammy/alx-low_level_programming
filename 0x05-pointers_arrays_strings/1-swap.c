#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: is the first argument
 * @b: is the second argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	*a = *b;
	*b = m;

}

#include "main.h"
/**
 * reset_to_98 - sets teh parameter to 98
 * @n: is the argument
 * Return: void
 */
void reset_to_98(int *n)
{
	int a;

	n = &a;

	*n = 98;

	*n = a;

}


#include "main.h'
/**
 * print_array - prints array
 * @a: is the first argument
 * @b: is the second argument
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

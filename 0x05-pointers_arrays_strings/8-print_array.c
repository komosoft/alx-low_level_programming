#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array pointer
 * @n: index array to be printed up to
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

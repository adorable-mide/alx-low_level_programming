#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer to the first element of the square matrix of integers.
 *
 * @size: size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int num;
	int sum1 = 0;
	int sum2 = 0;

	for (num = 0; num < size; num++)
	{
		sum1 += *(a + num * size + num);
		sum2 += *(a + num * size + (size - num - 1));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

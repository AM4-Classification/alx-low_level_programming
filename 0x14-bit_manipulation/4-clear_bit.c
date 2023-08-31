#include "main.h"

/**
 * clear_bit - modify value of a given bit to 0
 * @n: set pointer to the number to change
 * @index: index of the bit to clr
 *
 * Return: 1 for success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

#include "main.h"

/**
 * sets_bit - sets the bit at a given index to 1
 * @x: pointer to a number to change
 * @index: index of a bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int sets_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

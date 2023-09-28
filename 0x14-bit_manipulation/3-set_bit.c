#include "main.h"

/**
 * set_bit - Prototype that sets a bit at index to 1
 * @m: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, else -1
 */
int set_bit(unsigned long int *m, unsigned int index)
{
	if (index > 63)
		return (-1);

	*m = ((1UL << index) | *m);
	return (1);
}

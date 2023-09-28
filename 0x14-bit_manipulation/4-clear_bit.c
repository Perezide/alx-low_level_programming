#include "main.h"

/**
 * clear_bit - this prototype sets the value of a given bit to 0
 * @m: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, else -1
 */
int clear_bit(unsigned long int *m, unsigned int index)
{
	if (index > 63)
		return (-1);

	*m = (~(1UL << index) & *m);
	return (1);
}

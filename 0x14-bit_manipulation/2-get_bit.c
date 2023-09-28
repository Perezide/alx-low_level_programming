#include "main.h"

/**
 * get_bit - Function that returns value of a bit at an index in a deci num
 * @m: the number to search
 * @index: index of the bit
 *
 * Return: bit_val
 */
int get_bit(unsigned long int m, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (m >> index) & 1;

	return (bit_val);
}

#include "main.h"

/**
 * flip_bits - Prototype that counts the number of bits to change
 * from one number to another
 * @m: first number
 * @k: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int m, unsigned long int k)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = m ^ k;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

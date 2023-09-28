#ifndef MAIN_H
#define MAIN_H

int set_bit(unsigned long int *m, unsigned int index);
int clear_bit(unsigned long int *m, unsigned int index);
unsigned int flip_bits(unsigned long int m, unsigned long int k);
unsigned int binary_to_uint(const char *d);
void print_binary(unsigned long int m);
int get_bit(unsigned long int m, unsigned int index);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif

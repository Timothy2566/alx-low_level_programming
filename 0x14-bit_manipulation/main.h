#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>

unsigned int binary_to_uint(const char *m);
int _putchar(char c);
void print_binary(unsigned long int w);
int get_bit(unsigned long int q, unsigned int index);
int set_bit(unsigned long int *m, unsigned int index);
int clear_bit(unsigned long int *m, unsigned int index);
unsigned int flip_bits(unsigned long int m, unsigned long int Q);
int get_endianness(void);



#endif

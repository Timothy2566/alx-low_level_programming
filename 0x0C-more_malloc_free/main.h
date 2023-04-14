#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
void *malloc_checked(unsigned int t);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min_t, int max_t);
void *_realloc(void *tim, unsigned int old_size, unsigned int new_size);
int find_len(char *tim);
char *create_xarray(int size_a);
char *iterate_zeroes(char *tim);
int get_digit(char d);
void get_prod(char *prod, char *multi, int digits, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
int main(int argc, char *argv[]);

#endif

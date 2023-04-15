#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

int _putchar(char c);
void *malloc_checked(unsigned int t);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min_t, int max_t);
void *_realloc(void *tim, unsigned int old_size, unsigned int new_size);
void _is_zero(char *argv[]);
char *_iterate_array(char *tim, int joe);
int _checknum(char *argv[], int m);
int main(int argc, char *argv[]);

#endif

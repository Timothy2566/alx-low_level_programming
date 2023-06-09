#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
void print_name(char *name_t, void (*p)(char *));
void array_iterator(int *array_t, size_t size, void (*action_t)(int));
int int_index(int *array_t, int size, int (*cmp)(int));


#endif

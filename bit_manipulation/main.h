#ifndef _TASK_
#define _TASK_
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int _putchar(char);
#endif

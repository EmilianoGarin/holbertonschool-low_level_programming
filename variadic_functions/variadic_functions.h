#ifndef _TASK_
#define _TASK_
#include <stdarg.h>
typedef struct pritnf
{
	char flag;
	void (*print)(va_list ap);
}pr;
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

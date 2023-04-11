#ifndef _TASK_
#define _TASK_
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char);
#endif

#ifndef _TASK_
#define _TASK_
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char);
#endif

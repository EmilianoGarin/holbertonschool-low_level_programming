#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    
    *s= "First, solve the problem. Then, write the code.";

    f = _strchr(s, '\0');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

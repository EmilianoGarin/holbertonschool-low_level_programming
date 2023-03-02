#include <stdio.h>
#include <string.h>

int main()
{
	char *s = "emi456832emi 333";
	char *f = "0123456789";
    	unsigned int n;

    	n = strspn(s, f);
    	printf("%u\n", n);
    	return (0);
}

#include <stdio.h>

int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an int is: %lu bytes.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu bytes.\n", (unsigned long)sizeof(d));
	printf("The size of a char is: %lu byte.\n", (unsigned long)sizeof(c));

	return(0);
}

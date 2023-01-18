#include <stdio.h>

int fct (char c)
{
	printf("%c\n", c);
	return (0);
}

int main ()
{
	int (*ptr)(char);

	ptr = &fct;
	fct('a');
	(*ptr)('b');
	return(0);

}
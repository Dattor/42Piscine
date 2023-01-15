void ultimate (int ***nb)
{
	***nb = 42;
}

int main()
{
	int k = 7;
	int *p_k = &k;
	int **p_k2 = &p_k;
	int ***p_k3 = &p_k2;
	ultimate(p_k3);
	#include <stdio.h>
	printf ("result %d\n", ***p_k3);
}
#include <stdio.h>

int main()
{
	int i = 10;
	char c = 10;
	float f = 10.0;

	int *p_i;
	char *p_c;
	float *p_f;

	p_i = &i;
	p_c = &c;
	p_f = &f;

	printf("&p_i   %p, size i=%lu, i=%d \n",p_i, sizeof(i), *(p_i));
	printf("&p_i+1 %p, i=%d \n",(p_i+1), *(p_i+1));
	printf("&p_c   %p size c  %lu \n",p_c, sizeof(c));
	printf("&p_c+1 %p\n",(p_c+1));
	printf("&p_f   %p, size f=%lu, f=%f, \n",p_f, sizeof(f), f);
	printf("&p_f+1 %p\n",(p_f+1));
}

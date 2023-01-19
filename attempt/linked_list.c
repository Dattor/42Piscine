#include <stdio.h>

	struct s_list
{
	int i;
	char c;
	struct s_list *next;
};

void pass_list(struct s_list *begin)
{
	if(!begin) //not necesary
		return;
	while (begin)
	{
		printf("_%d\n", begin->i);
		begin = begin->next;
	}
}

int main ()
{

	struct s_list elem1;
	struct s_list elem2;
	struct s_list elem3;
	struct s_list *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.i = 99;
	elem2.i = 33;
	elem3.i = 42;
/*
	printf("%d\n", elem3.i);
	printf("%d\n", elem2.next->i);
	printf("%d\n", ( ( *(elem2.next) ).i )  );

	printf("%d\n", (elem1.next->next->i));
	printf("%d\n", (  (*(  (*(elem1.next)).next)).i));
*/

	pass_list(begin);

	return(0);
}
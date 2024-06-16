#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *stri;
	char *t_find;
	int size_of_find;

	if (*to_find == 0)
		return (str);
	stri = str;
	t_find = to_find;
	while (true)
	{
		if (*t_find == '\0')
		{
			size_of_find = (t_find - to_find);
			//odl2 = stri - size_of_find;
			//return ((stri - (t_find - to_find)));
			return (stri - size_of_find);
		}
		if (*t_find == *stri)
			t_find++;
		else
			t_find = to_find;
		if (*stri == '\0')
			break ;
		stri++;
	}
	return (NULL);
}

int		main(void)
{
	char *string;
	char *finding;
	char *result_c;
	char *result_ft;

	string = "Foo Bac Har Bum";
	finding = "Har ";

	result_c = strstr(string, finding);
	result_ft = ft_strstr(string, finding);

	printf("%p / %p\n", result_c, result_ft);

	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}

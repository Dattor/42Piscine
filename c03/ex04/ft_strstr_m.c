#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*t_find;
	int		size_of_find;
	int		i;

	if (to_find[0] == 0)
		return (str);
	i = 0;
	t_find = to_find;
	while (*(str + i))
	{
		if (*t_find == '\0')
		{
			printf("%p / %p\n", t_find, to_find);
			size_of_find = (t_find - to_find);
			return (str + i - size_of_find);
		}
		if (*t_find == *(str + i))
			t_find++;
		else
			t_find = to_find;
		i++;
	}
	if (*t_find == '\0')
		{
			printf("%p / %p\n", t_find, to_find);
			size_of_find = (t_find - to_find);
			return (str + i - size_of_find);
		}
	return (0);
}

int		main(void)
{
	char *string;
	char *finding;
	char *result_c;
	char *result_ft;

	string = "Foo Bumc Har Buma";
	finding = "Buma";

	result_c = strstr(string, finding);
	result_ft = ft_strstr(string, finding);

	printf("%p / %p\n", result_c, result_ft);

	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}

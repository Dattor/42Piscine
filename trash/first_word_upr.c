#include <unistd.h>

int	is_not_space(char c)
{
	return (!(c == ' ' || c == '\t'));
}

void	print_first_word(char *str)
{
	int		index;
	int		offset;
	char	*word;

	index = 0;
	word = str;
	while (!is_not_space(*(str + index)))
		index++;
	offset = index;
	while (*(str + index) && is_not_space(*(str+index)))
	{
		index++;
	}
	if (word != 0)
		write(1, word + offset, index - offset);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_first_word(argv[1]);
	write(1, "\n", 1);
}
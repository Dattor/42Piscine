#include <stdio.h>
int	whitespaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && *(str + i) <= 13 ) || str[i] == ' ')
		i++;
	while ((str[i] == '+' || *(str + i) == 45))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	grade;
	int	counter;

	grade = 0;
	sign = whitespaces(str, &counter);
	//char ladeni;
	while (*(str + counter) && str[counter] >= '0' && str[counter] <= 57)
	{
		//ladeni = *(str + counter);
		grade *= 10;
		grade += str[counter] - 48;
		counter++;
	}
	grade *= sign;
	return (grade);
}
int main(void)
{
	char *s = "   ---+--+01234506789ab567";
	printf("ho\n");
	printf("%d", ft_atoi(s));
	printf("\n");
}

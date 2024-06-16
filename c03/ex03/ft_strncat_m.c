#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
		j = 0;
	while (*(src + j) != '\0' && nb > 0)
	{
		*(dest + i + j) = *(src + j);
		j++;
		nb--;
	}
	*(dest + i + j) = '\0';
	return (dest);
}

int		main(void)
{
	char src[] = "World  \\";
	char src2[] = "World  \\";
	char	*dest;
	char	*dest2;
	dest = (char *) malloc(99);
	strcpy(dest,"Hello  ");

	dest2 = (char *) malloc(99);
	strcpy(dest2,"Hello  ");

	printf("c  : %s$\n", strncat(dest, src, 4));
	printf("ft : %s$\n", ft_strncat(dest2, src2, 4));
}

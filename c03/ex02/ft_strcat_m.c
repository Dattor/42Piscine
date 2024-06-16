#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[j+i] = src[j];
		j++;
	}
	dest[i+j] = '\0';
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
	
	printf("c  : %s$\n", strcat(dest, src));
	printf("ft : %s$\n", ft_strcat(dest2, src2));
}

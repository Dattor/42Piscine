//#include "strup.h"

char	*strup(char *str)
{
	int i = 0;
	while (str[i])
	{	if ( str[i] >= 'a' && *(str + i) <= 'z')
			str[i]-= 32;
	i++;
	}
	return(str);
}
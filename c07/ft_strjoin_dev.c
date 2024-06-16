/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 11:12:52 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/08 11:12:53 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int		ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		//final_length += sep_length;
		index++;
	}
	//final_length -= sep_length;
	final_length += (size - 1) * sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*p_string;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));	//return void string

	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));

	if (!(string = (char *)malloc((full_length + 1) * sizeof(char))))
		return (0);

	p_string = string;
	index = 0;
	while (index < size)
	{
		//p_string = p_string + strs[index];
		ft_strcpy(p_string, strs[index]);
		p_string += ft_str_length(strs[index]);		// HUSTY POSUN POINTERU :)
		if (index < size - 1)
		{
			ft_strcpy(p_string, sep);
			p_string += ft_str_length(sep);		// POSUN POINTERU :)
		}
		index++;
	}
	*p_string = 'k';  //pokus s prekrocenim velikosti pro malloc
	p_string += ft_str_length(p_string); // p_string buduje string, ale po pridani 'k' ukazuje na 'k'.
	*p_string = '\0';
	return (string);
}

int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	char 	**p_strs;

	strs = (char**)malloc(4 * sizeof(strs));

	p_strs = strs;  //debug
	/*
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	*/	//debug

	*(strs) = "lol";
	strs ++;
	*strs++ = "12345";
	*strs = "poi";
	strs++;
	*strs = "56789";
	
	separator = ";";
	/*index = 0;
	while (index < 4)
	{
		//result = ft_strjoin(index, strs, separator);
		result = ft_strjoin(index, p_strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
	*/
	result = ft_strjoin(4, p_strs, separator);
	printf("result with size = %d : $%s$\n", 4, result);
	free(result);


}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvokoun <mvokoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:18:19 by mvokoun           #+#    #+#             */
/*   Updated: 2022/10/29 16:42:41 by mvokoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

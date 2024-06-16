/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvokoun <mvokoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:18:19 by mvokoun           #+#    #+#             */
/*   Updated: 2022/10/30 10:35:28 by mvokoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			size_of_find = (t_find - to_find);
			return (str + i - size_of_find);
		}
		if (*t_find == *(str + i))
			t_find++;
		else
			t_find = to_find;
		i++;
	}
	return (0);
}

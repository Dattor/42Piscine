/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_m.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvokoun <mvokoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:12:29 by mvokoun           #+#    #+#             */
/*   Updated: 2022/10/27 12:12:12 by mvokoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sort;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sort = tab [i + 1];
				tab[i + 1] = tab [i];
				tab [i] = sort;
			}
			i++;
		}
		size--;
	}
}

int main ()
{	
	//char pole [] = "ZSAWERTVA";
	int pole [] = {9,8,7,6,5,1,2,3,9};
	for (int i; i < 9; i++)
	printf("%d", pole[i]);
	ft_sort_int_tab(pole,9);
	printf("\n");
	int i = 0;
	while(i < 9)
	printf("%d",*(pole + i++));
}

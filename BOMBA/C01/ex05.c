/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:17:54 by ubuntu            #+#    #+#             */
/*   Updated: 2023/07/09 13:28:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

int	main(void)
{
	int		array[3];
	int		i;
	char	ascii;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	ft_rev_int_tab(array, 3);

	i = 0;
	while (i < 5)
	{
		c = array[i];
		write(1, &c, 1);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:30:49 by root              #+#    #+#             */
/*   Updated: 2023/07/13 19:21:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		*last;
	int		*temp;

	last = tab + size * 4;
	while (last != tab)
	{
		*temp = *last;
		*last = *tab;
		*tab = *temp;
		tab += 12;
		last -= 12;
	}
}

int	main(void)
{
	int		array[10];
	int		i;
	char	ascii;

	i = 0;
	while (i < 10)
	{
		array[i] = rand() % 10;
		ascii = 48 + array[i];
		write(1, &ascii, 1);
		write(1, " ", 1);
		i++;
		printf("%ld\n", sizeof(array[i]));
	}
	write(1, "\n", 1);
	ft_sort_int_tab(array, 10);
	i = 0;
	while (i < 10)
	{
		ascii = 48 + array[i];
		write(1, &ascii, 1);
		write(1, " ", 1);
		i++;
	}
}

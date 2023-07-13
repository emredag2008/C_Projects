/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:07:38 by ubuntu            #+#    #+#             */
/*   Updated: 2023/07/09 13:05:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	ascii;
	int		i;
	int		max;

	i = 0;
	if (n == 1)
	{
		max = 10;
	}
	else if (n == 2)
	{
		max = 100;
	}
	else if (n == 3)
	{
		max = 1000;
	}
	else if (n == 4)
	{
		max = 10000;
	}
	else if (n == 5)
	{
		max = 100000;
	}
	else if (n == 6)
	{
		max = 1000000;
	}
	else if (n == 7)
	{
		max = 10000000;
	}
	else if (n == 8)
	{
		max = 100000000;
	}
	else if (n == 9)
	{
		max = 1000000000;
	}
	else
	{
		write(1, "!", 1);
	}
	while (i < max)
	{
		while ()
		{
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
}

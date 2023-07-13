/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:50:19 by ubuntu            #+#    #+#             */
/*   Updated: 2023/07/09 11:47:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int		digit;
	int		temp;
	float	temp2;
	int		x;
	char	c;

	digit = 0;
	temp = nbr;
	temp2 = nbr;
	while (temp > 0)
	{
		digit++;
		temp /= 10;
	}
	while (temp2 > 0.99)
	{
		temp2 /= 10;
	}
	while (temp2 < nbr)
	{
		temp2 *= 10;
		x = (int)temp2 % 10;
		c = 48 + x;
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	y = 1;
	while (x < 99)
	{
		while (y < 100)
		{
			ft_putnbr(x);
			write(1, " ", 1);
			ft_putnbr(y);
			y++;
			write(1, "\n", 1);
		}
		x++;
		y = x + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
}

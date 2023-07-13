/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:35:58 by ubuntu            #+#    #+#             */
/*   Updated: 2023/05/19 19:51:20 by ubuntu           ###   ########.fr       */
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

int	main(void)
{
	ft_putnbr(13231);
	return (0);
}

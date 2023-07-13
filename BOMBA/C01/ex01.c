/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:50:47 by ubuntu            #+#    #+#             */
/*   Updated: 2023/05/29 14:15:00 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int		div;
	int		mod;
	int		*ptr_div;
	int		*ptr_mod;

	ptr_mod = &mod;
	ptr_div = &div;
	ft_div_mod(45, 15, ptr_div, ptr_mod);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:53:10 by ubuntu            #+#    #+#             */
/*   Updated: 2023/05/28 14:49:26 by ubuntu           ###   ########.fr       */
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

int	main(void)
{
	int	a;
	int	*ptr_a;
	int	b;
	int	*ptr_b;

	a = 45;
	ptr_a = &a;
	b = 30;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("%d   %d", a, b);
}

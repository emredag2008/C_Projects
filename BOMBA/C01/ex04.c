/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:45:33 by ubuntu            #+#    #+#             */
/*   Updated: 2023/05/29 14:15:58 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*str;

	str = "emre";
	printf("%d", ft_strlen(str));
}

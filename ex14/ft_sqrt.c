/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:59:10 by mchamma           #+#    #+#             */
/*   Updated: 2023/04/24 19:42:01 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	mid;

	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (nb);
	mid = 2;
	while (mid < 46341)
	{
		if (mid * mid == nb)
			return (mid);
		mid++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 4;
// 	printf("%d", ft_sqrt(nb));
// 	return (0);
// }

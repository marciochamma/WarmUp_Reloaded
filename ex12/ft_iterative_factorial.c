/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:04:01 by mchamma           #+#    #+#             */
/*   Updated: 2023/04/19 20:17:48 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 13)
		return (0);
	result = 1;
	while (nb != 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 12;
// 	printf("%d", ft_iterative_factorial(nb));
// 	return (0);
// }

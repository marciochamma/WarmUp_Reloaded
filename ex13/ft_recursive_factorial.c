/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:26:30 by mchamma           #+#    #+#             */
/*   Updated: 2023/04/19 18:56:56 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 13)
		return (0);
	else if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 12;
// 	printf("%d\n", ft_recursive_factorial(nb));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:57:08 by mchamma           #+#    #+#             */
/*   Updated: 2023/04/24 19:35:56 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// void	ft_putnbr(int nb)
// {
// 	int	un;

// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		un = ((nb % 10) * -1) + '0';
// 		nb /= -10;
// 	}
// 	else
// 	{
// 		un = (nb % 10) + '0';
// 		nb /= 10;
// 	}
// 	if (nb > 0)
// 		ft_putnbr(nb);
// 	write(1, &un, 1);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int	main(void)
// {
// 	int tab[5] = {10, 20, 30, 40, 50};

// 	ft_foreach(tab, 5, &ft_putnbr);
// 	return (0);
// }

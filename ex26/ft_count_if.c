/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:17:33 by mchamma           #+#    #+#             */
/*   Updated: 2023/04/24 16:37:05 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

// int	ft_uppercase(char *n)
// {
// 	int	i;

// 	i = 0;
// 	while (n[i] != '\0')
// 	{
// 		if (n[i] < 'A' || n[i] > 'Z')
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

// int	main(void)
// {
// 	char	*tab[] = {"Marcio", "MARCIO", "marcio"};

// 	printf("%d", ft_count_if(tab, &ft_uppercase));
// 	return (0);
// }

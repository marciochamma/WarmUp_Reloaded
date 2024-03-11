/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:30:32 by abracurcix        #+#    #+#             */
/*   Updated: 2023/04/24 19:37:40 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	arr = (int *) malloc(((max - min) + 1) * sizeof(int));
	i = 0;
	while (i != (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*arr;
// 	int	i;

// 	min = 24;
// 	max = 30;
// 	arr = ft_range(min, max);
// 	if (min >= max)
// 		return (0);
// 	i = 0;
// 	while (arr[i] != '\0')
// 	{
// 		if (arr[i + 1] != '\0')
// 			printf("%d, ", arr[i]);
// 		else
// 			printf("%d", arr[i]);
// 		i++;
// 	}
// }

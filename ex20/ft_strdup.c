/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:52:12 by abracurcix        #+#    #+#             */
/*   Updated: 2023/04/25 16:44:41 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	while (src[i] != '\0')
		i++;
	dst = (char *) malloc((i + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int	main(void)
// {
// 	char	*src;

// 	src = "marcio";
// 	printf("%s", ft_strdup(src));
// 	return (0);
// }

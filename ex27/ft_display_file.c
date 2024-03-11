/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:58:52 by mchamma           #+#    #+#             */
/*   Updated: 2023/04/25 16:58:35 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	buffer[65535];

	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr("File name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open (argv[1], O_RDONLY);
	if (fd < 0)
		return (1);
	while (read (fd, &buffer, 1) != 0)
		ft_putstr(buffer);
	close(fd);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:35:40 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/07/05 15:36:02 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
	{
		fd = 0;
	}
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
	}
	else
	{
		return (2);
	}
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
		sleep(10);
	}
	if (argc == 2)
	{
		close(fd);
	}
}

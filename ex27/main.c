/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 19:32:00 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/10 15:31:58 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		filesize;
	char	data[BUFF_SIZE + 1];

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while ((filesize = read(fd, data, BUFF_SIZE)))
	{
		data[filesize] = '\0';
		ft_putstr(data);
	}
	return (0);
}

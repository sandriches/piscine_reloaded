/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 18:09:13 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/10 12:35:54 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

void	print(char **str)
{
	int x;

	x = 1;
	while (str[x] != 0)
	{
		ft_putstr(str[x]);
		ft_putchar('\n');
		x++;
	}
}

void	sort(char **str, int counter)
{
	int		x;
	int		y;
	char	*buffer;

	x = 1;
	y = 0;
	while (counter > 0)
	{
		while (str[x + 1] != 0)
		{
			while (str[x][y] == str[x + 1][y])
				y++;
			if (str[x][y] > str[x + 1][y])
			{
				buffer = str[x];
				str[x] = str[x + 1];
				str[x + 1] = buffer;
			}
			y = 0;
			x++;
		}
		x = 0;
		counter--;
	}
	print(str);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	sort(argv, argc);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   full_count_if.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 16:59:41 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/09 18:33:49 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while (tab[z + 1] != 0)
		z++;
	while (y <= z)
	{
		if (f(tab[y]) == 1)
			x++;
		y++;
	}
	return (x);
}

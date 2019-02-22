/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 10:32:21 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/10 11:05:47 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	int		y;
	char	*strcopy;

	x = 0;
	while (src[x] != '\0')
		x++;
	strcopy = (char*)malloc(x * sizeof(char) + 1);
	y = 0;
	while (y < x)
	{
		strcopy[y] = src[y];
		y++;
	}
	strcopy[y] = '\0';
	return (strcopy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 11:08:37 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/09 11:44:09 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int x;
	int y;
	int counter;
	int *array;

	if (min >= max)
		return (0);
	x = max - min;
	array = (int*)malloc(x * sizeof(int));
	counter = min;
	y = 0;
	while (counter < max)
	{
		array[y] = min;
		min++;
		y++;
		counter++;
	}
	return (array);
}

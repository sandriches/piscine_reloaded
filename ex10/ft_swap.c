/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 19:10:41 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/10 10:41:02 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int storage;

	storage = *a;
	*a = *b;
	*b = storage;
}

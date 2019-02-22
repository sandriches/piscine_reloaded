/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   full_iterative_fact.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 14:58:52 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/08 15:47:56 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

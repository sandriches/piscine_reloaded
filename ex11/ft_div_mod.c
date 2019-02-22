/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   full_div.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 09:29:18 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/10 10:44:43 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int result;
	int modresult;

	result = a / b;
	modresult = a % b;
	*div = result;
	*mod = modresult;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 17:55:34 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/07 18:23:01 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		ft_putchar(a);
		a++;
	}
}

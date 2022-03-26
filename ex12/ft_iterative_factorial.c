/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:25:19 by asoler            #+#    #+#             */
/*   Updated: 2022/03/25 15:29:04 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	result;

	result = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb >= 1)
		{
			result *= nb;
			nb--;
		}
	}
	if (result > 2147483647)
		return (0);
	else
		return (result);
}

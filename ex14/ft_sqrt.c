/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:57:54 by asoler            #+#    #+#             */
/*   Updated: 2022/03/25 15:29:49 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	odd;
	int	index;

	if (nb == 1)
		return (1);
	else if (nb == 0)
		return (0);
	else
	{
		odd = 1;
		index = 0;
		while (nb > 0)
		{
			nb -= odd;
			odd += 2;
			index++;
		}
		if (nb < 0)
			return (0);
		else
			return (index);
	}
}

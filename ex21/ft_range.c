/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:45:13 by asoler            #+#    #+#             */
/*   Updated: 2022/03/27 16:40:40 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	size = (min * (- 1)) + max;
	range = (int *)malloc(size);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return(range);
}

#include <stdio.h>
int	main()
{
	int range[5] = ft_range(-1, 4);
	// int size;
	int i;

	// range;
	// size = sizeof(range) / sizeof(range[0]);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:45:13 by asoler            #+#    #+#             */
/*   Updated: 2022/03/28 15:31:14 by asoler           ###   ########.fr       */
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
	range = (int *)malloc(sizeof(int) * size);
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
	int *range;
	int size;
	int i;

	// range;
	size = sizeof(range) / sizeof(range[0]);
	range = ft_range(-5, 8);
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
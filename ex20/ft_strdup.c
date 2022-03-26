/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:30:10 by asoler            #+#    #+#             */
/*   Updated: 2022/03/25 17:00:41 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src);
	dup = (char *)malloc(size);
	dup = src;
	return (dup);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "this string is going to be dupplicated";
	char *dup = strdup(str);
	char *ftdup = ft_strdup(str);

	printf("Original Funtion: %s\n\n", dup);
	printf("Original String: %s\n\n", str);
	printf("FT Funtion: %s\n\n", ftdup);
}

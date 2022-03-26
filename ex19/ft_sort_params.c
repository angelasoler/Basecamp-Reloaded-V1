/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:20:33 by asoler            #+#    #+#             */
/*   Updated: 2022/03/25 17:23:36 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putvector(int argc, char *argv[])
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			return (result);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		index;
	int		index2;
	char	*aux;

	index = 1;
	index2 = 1;
	while (index < argc)
	{
		while (index2 < argc - 1)
		{
			if (ft_strcmp(argv[index2], argv[index2 + 1]) > 0)
			{
				aux = argv[index2];
				argv[index2] = argv[index2 + 1];
				argv[index2 + 1] = aux;
			}
			index2++;
		}
		index2 = 1;
		index++;
	}
	ft_putvector(argc, argv);
}

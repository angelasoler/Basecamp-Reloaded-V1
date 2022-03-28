#include "../includes/ft_strcmp.h"

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

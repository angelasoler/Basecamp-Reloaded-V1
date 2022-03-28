#include <stdlib.h>

// int	*ft_range(int min, int max)
// {
// }

#include <stdio.h>
int	main()
{
	int min = -45123;
	int max = 45;
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

	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	// free(range);
}
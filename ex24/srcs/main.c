#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);

int	main(void)
{
	char a[] = "ab";
	char b[] = "ac";
	int x = 5;
	int y = 7;

	ft_putstr("testing makefile\n");
	printf("1 = %d\n", ft_strcmp(a, b));
	printf("19 = %d\n", ft_strlen("testing makefile\n"));
	ft_swap(&x, &y);
	printf("before x value was 5 now is %d, and y was 7 now is 5 %d\n", x, y);

}

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	unb;

	unb = nb;
	i = 0;
	while (i * i != unb && i * i < unb)
		i++;
	if (i * i == unb)
		return (i);
	else
		return (0);
}
int		main(void)
{
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 3 = %d (0)\n", ft_sqrt(3));
	printf("16 = %d \n", ft_sqrt(16));
	
}

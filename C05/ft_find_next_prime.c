#include <stdio.h>
int ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb < 2)//0 1 ve -ler için
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
int		main(void)
{
	printf("-10 = %d \n", ft_find_next_prime(-10));
	printf("-1 = %d \n", ft_find_next_prime(-1));
	printf(" 0 = %d \n", ft_find_next_prime(0));
	printf(" 1 = %d \n", ft_find_next_prime(1));
	printf(" 2 = %d \n", ft_find_next_prime(2));
	printf(" 3 = %d \n", ft_find_next_prime(3));
	printf(" 10 = %d \n", ft_find_next_prime(10));
	printf(" 24 = %d \n", ft_find_next_prime(24));
}

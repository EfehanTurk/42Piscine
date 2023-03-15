#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*charptrdest;
	char			*charptrsrc;
	unsigned int	i;

	i = 0;
	charptrdest = dest;
	charptrsrc = src;
	while (*charptrdest)
		charptrdest++;
	while (i < nb && *charptrsrc)
	{
		*charptrdest = *charptrsrc;
		charptrsrc++;
		charptrdest++;
		i++;
	}
	*charptrdest = 0;
	return (dest);
}
int	main()
{
	char src[] = "istanbul";
	char dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 8));
}

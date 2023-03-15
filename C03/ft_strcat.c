#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *charptr;
	char *charptrsrc;

	charptr = dest;
	charptrsrc = src;
	while (*charptr)
		charptr++;
	while (*charptrsrc)
	{
		*charptr = *charptrsrc;
		charptrsrc++;
		charptr++;
	}
	*charptr = 0;
	return (dest);
}
int	main()
{
	char src[] = "istanbul";
	char dest[] = "42 ";
	printf("%s", ft_strcat(dest, src));
}

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
int	main()
{
	printf("%d", ft_strcmp("Hello", "Hello1"));//-49
	printf("\n%d", ft_strcmp("Hello", "He"));//108
	printf("\n%d", ft_strcmp("He", "Hello"));//-108
	printf("\n%d", ft_strcmp("Hello", "Hello"));//0
}

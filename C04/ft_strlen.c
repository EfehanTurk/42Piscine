#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;
	
	c = 0;
	while(str[c] != '\0')
		c++;
		return (c);
}
int main()
{
	printf("%d",ft_strlen("42 istanbul"));
}

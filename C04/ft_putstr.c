#include <unistd.h>
//void fonksiyonlarda return kullanma intte kullan
void	ft_putstr(char	*str)
{
	int	c;
	
	c = 0;
	while(str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
}
int main()
{
	ft_putstr("42 istanbul");
}

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int c;
	int d;
	
	c = 12;
	d = 4;
	ft_swap(&c,&d);
	
	printf("%d %d", c, d);
}

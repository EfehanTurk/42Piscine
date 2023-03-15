#include <stdio.h>
//her sayýnýn kendisinden bir önceki sayý ile toplanmasý ile elde edilen sayýlar serisidir.
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));//fb(7)=fb(5)+fb(6)
}

int	main(void)
{
	printf("%d", ft_fibonacci(7));//1 1 2 3 5 8 13
}

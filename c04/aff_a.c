#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if(argc <= 1)//ba��ms�z de�i�ken 2 de�ilse, ��kt�da "a" g�r�nt�lenir.
		write(1, "a", 1);
	else 
	{
	while(argv[1][i])//ilk arg�man�n indeksindeyken
	{
		if(argv[1][i] == 'a')//dizin 'a' de�erine e�itse
		{
			write(1, "a", 1);
			break;//ilk 'a' g�rd���n yerde yazd�r ve d�ng�den ��k
		}
		i++;//'a'y� bulana kadar d�n
	}
	}
		write(1, "\n", 1);
		return (0);
}

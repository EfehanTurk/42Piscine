#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if(argc <= 1)//ba��ms�z de�i�ken 2 de�ilse, ��kt�da "z" g�r�nt�lenir.
		write(1, "z", 1);
	else 
	{
	while(argv[1][i])//ilk arg�man�n indeksindeyken
	{
		if(argv[1][i] == 'z')//dizin 'z' de�erine e�itse
		{
			write(1, "z", 1);
			break;//ilk 'z' g�rd���n yerde yazd�r ve d�ng�den ��k
		}
		i++;//'z'y� bulana kadar d�n
	}
	}
		write(1, "\n", 1);
		return (0);
}

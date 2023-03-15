#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if(argc <= 1)//baðýmsýz deðiþken 2 deðilse, çýktýda "a" görüntülenir.
		write(1, "a", 1);
	else 
	{
	while(argv[1][i])//ilk argümanýn indeksindeyken
	{
		if(argv[1][i] == 'a')//dizin 'a' deðerine eþitse
		{
			write(1, "a", 1);
			break;//ilk 'a' gördüðün yerde yazdýr ve döngüden çýk
		}
		i++;//'a'yý bulana kadar dön
	}
	}
		write(1, "\n", 1);
		return (0);
}

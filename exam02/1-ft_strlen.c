int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
		return (i);
}
int     main(void)
  {
      char name[] = "42 istanbul piscine";
      printf("%d\n", ft_strlen(name));
      return (0);
  }

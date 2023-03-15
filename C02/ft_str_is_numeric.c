/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:14:45 by eturk             #+#    #+#             */
/*   Updated: 2022/10/23 15:30:37 by eturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//rakam dizisiyse 1 değilse 0
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57 ))//ascii tablosunda 0'dan 9'a değilse
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int main()
{
	char numeric[] = {"0123456789"};
	char *p_num;
	p_num = numeric;

	char special[] = {"012345678-"};
	char *p_spe;
	p_spe = special;

	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
    printf("%d",ft_str_is_numeric(""));
}

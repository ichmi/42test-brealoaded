/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <git.ichmi@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:32:36 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/01 12:39:33 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_itoa(int nb, char *buff);

void	ft_normalize(char *str);

void	ft_reverse(char *str, int size);

void	ft_print(char *str, int overf);

void	ft_putnbr(int nb)
{
	char	buff[50];
	char	*str;
	int		overf;

	overf = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			nb /= 10;
			overf = 1;
		}
		nb = -nb;
	}
	if (nb == 0)
		write(1, "0", 1);
	str = ft_itoa(nb, buff);
	ft_normalize(str);
	ft_print(str, overf);
	return ;
}

char	*ft_itoa(int nb, char *buff)
{
	int	i;
	int	rest;

	i = 0;
	rest = nb % 10;
	while (nb > 0)
	{
		buff[i] = rest + '0';
		nb = nb / 10;
		rest = nb % 10;
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

void	ft_normalize(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = -1;
	while (str[++i] != '\0')
		size++;
	ft_reverse(str, size);
	return ;
}

void	ft_reverse(char *str, int size)
{
	char	buff[50];
	int		i;
	int		j;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		buff[i] = str[j];
		i++;
		j--;
	}
	buff[i] = '\0';
	i = 0;
	while (buff[i] != '\0')
	{
		str[i] = buff[i];
		i++;
	}
	return ;
}

void	ft_print(char *str, int overf)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	if (overf)
		write(1, "8 ", 2);
	else
		write(1, " ", 1);
}

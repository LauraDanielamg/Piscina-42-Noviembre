/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:38:04 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/07 16:38:19 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int x)
{
	char	character;

	character = x + '0';
	write(1, &character, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	long	number;
	long	b; 
	long 	pos;

	number = nb;
	if (number > 9)
	{
		n = number / 10;
		ft_putnbr(n);
		b = number % 10;
		ft_print_number(b);
	}
	else if (number < 0)
	{
		pos = number;
		write(1, "-", 1);
		ft_putnbr(-pos);
	}
	else
	{
		ft_print_number(number);
	}
}

int main()
{
	ft_putnbr(-12147483647);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1,"\n", 1);
	ft_putnbr(-123456);
	return (0);
}
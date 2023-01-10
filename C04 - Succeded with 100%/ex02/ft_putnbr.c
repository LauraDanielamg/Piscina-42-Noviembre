/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:06:03 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/22 16:41:14 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number = number * -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar(number + '0');
	}
}
/*int main()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1,"\n", 1);
	ft_putnbr(-123456);
	return (0);
}*/

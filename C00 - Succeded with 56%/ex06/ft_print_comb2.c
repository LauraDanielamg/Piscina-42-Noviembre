/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:24:43 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/08 09:57:24 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (d != '9')
		write(1, ", ", 1);
	else if (c != '9')
		write(1, ", ", 1);
	else if (b != '8')
		write(1, ", ", 1);
	else if (a != '9')
		write(1, ", ", 1);
}

void	second_pair(int a, int b)
{
	char	c;
	char	d;

	c = a;
	while (c <= '9')
	{
		if (c == a)
			d = b + 1;
		else
			d = '0';
		while (d <= '9')
		{
			ft_print_numbers(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{	
		b = '0';
		while (b <= '8')
		{
			second_pair(a, b);
			b++;
		}
		a++;
	}		
}

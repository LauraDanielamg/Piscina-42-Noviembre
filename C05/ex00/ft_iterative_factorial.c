/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:50:34 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/23 02:02:12 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fact);
}
/*int main (void)
{
	printf("%i", ft_iterative_factorial(5));
}*/

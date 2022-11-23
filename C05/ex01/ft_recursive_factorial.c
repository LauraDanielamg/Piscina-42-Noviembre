/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:02:57 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/23 02:11:33 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb > 0)
	{
		fact *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (fact);
}
/*int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}*/

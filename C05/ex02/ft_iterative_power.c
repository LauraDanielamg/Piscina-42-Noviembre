/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:12:10 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/23 02:14:50 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = nb;
	while (power > 1)
	{
		pow *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (pow);
}
/*int	main(void)
{
	printf("%i", ft_iterative_power(5, 5 ));
}*/

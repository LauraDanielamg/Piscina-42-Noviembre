/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:27:22 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/23 02:34:59 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*int    main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(-12));
        return (0);
}*/

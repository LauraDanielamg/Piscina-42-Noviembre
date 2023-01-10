/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:25:14 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/06 18:56:39 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j <= y)
		{
			if (j == 0 && (i == 0 || i == x - 1))
				ft_putchar('A');
			else if (j == y - 1 && (i == x - 1 || i == 0))
				ft_putchar('C');
			else if ((j == 0 || i == 0) || (j == y - 1 || i == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

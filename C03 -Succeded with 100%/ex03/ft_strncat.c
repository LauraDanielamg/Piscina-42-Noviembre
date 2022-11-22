/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:59:24 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/16 15:04:51 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1])
	{
		c1++;
	}
	while (c2 < nb && src[c2])
	{
		dest[c1 + c2] = src[c2];
		c2++;
	}
	dest[c1 + c2] = '\0';
	return (dest);
}
int main ()
{
	char dest[5] = "Hola";
	char src[6] = "Mundo";
	
	printf("%s\n", ft_strncat(dest, src, 2));
	return (0);
}

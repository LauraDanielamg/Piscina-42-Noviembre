/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:34:17 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/15 12:36:08 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((count < n) && (*s1) && (*s2))
	{
		if (s1[count] > s2[count])
			return (1);
		else if (s1[count] < s2[count])
			return (-1);
		count++;
	}
	return (0);
}
int main ()
{
    char *s1 = "Arbol";
    char *s2 = "Artesania";
    char *s3 = "Zorro";

  printf("Comparar Arbol y Artesania: %d\n", ft_strncmp(s1, s2, 2));
  printf("Comparar Arbol y Artesania: %d\n", ft_strncmp(s2, s1, 6));
  printf("Comparar Arbol y Zorro: %d\n", ft_strncmp(s1, s3, 10));
  return 0;
}

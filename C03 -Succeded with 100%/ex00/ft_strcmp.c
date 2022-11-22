/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:07:06 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/15 12:09:23 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1) && (*s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main()
{
    char *s1 = "A";
    char *s2 = "Z";

  printf("Comparar A y Z: %d\n", ft_strcmp(s1, s2));
  printf("Comparar Z y A: %d\n", ft_strcmp(s2, s1));
  printf("Comparar A y A: %d\n", ft_strcmp(s1, s1));
  return 0;
}

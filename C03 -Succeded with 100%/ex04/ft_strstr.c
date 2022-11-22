/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:06:10 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/17 11:53:27 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int		c1;
	int		c2;

	c1 = 0;
	c2 = 0;
	if (!*to_find)
	{	
		return (str);
	}
	while (*str)
	{
		while (str[c1 + c2] == to_find[c2] && str[c1 + c2])
			c2++;
		if (!to_find[c2])
			return (str + c1);
		c1++;
		c2 = 0;
	}
	return (0);
}
int main () {
   char haystack[16] = "42 es divertido";
   char needle[10] = "aaa";

	char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}

/*int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "o";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}*/

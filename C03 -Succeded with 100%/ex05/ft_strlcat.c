/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:54:27 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/17 12:51:49 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (!size || size <= dlen)
		return (slen + size);
	while (*src && i < size - dlen -1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
int main ()
{
    char src[] = "Hola";
    char dest[] = "nana";

    printf("%d | %s", ft_strlcat(dest, src, 5), dest);
    return (0);
 }
/*int main ()
{
    char src[] = "12345";
    char dest[] = "Hola";

    printf("%lu | %s", strlcat(dest, src, 5), dest);
    return (0);
 }*/

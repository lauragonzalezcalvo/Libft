/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:41:53 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/22 15:17:42 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
 * La función *memchr() busca en los primeros n bytes de s el caracter c.
La función acaba al encontrar el primer carácter que concuerde con  c
s Puntero a la cadena de carácteres.
c Valor del carácter a buscar.
n Numero de bytes en los que buscar, empezando por la derecha.*/

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;
	char	letter;

	i = 0;
	str = (char *)s;
	letter = (char)c;
	while (i <= n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Motomami";
   char *puntero; 
   puntero = (void  *)str;
   printf( "%s\n", str); 
   printf( "%s\n", memchr(puntero, 'a', 2));

   char str2[] = "Motomami";
   char *puntero2;
   puntero2 = (void  *)str2;
   printf( "%s\n", str2);
   printf( "%s\n", ft_memchr(puntero2, 'a', 2));
}*/

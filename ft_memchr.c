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
/* DESCRIPCIÓN/
 * La función strchr() toma como argumento un string, un entero y un size_t.
 * El entero c es el entero que debe localizar, el size_t son los primeros
 * n caracteres donde busca 
 * VALOR DEVUELTO
 * Si no encuentra c en los primeros n caracteres, devuelve NULL.
 * Si lo encuentra, devuelve un puntero con la primera ocurrencia
 * del carácter c en la cadena de caracteres s.*/

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t	i;
	unsigned char	letter;

	i = 0;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == letter)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "Motomami";
   printf( "%s\n", str); 
   printf( "%s\n", (char *)memchr(str, 'o', 2));

   char str2[] = "Motomami";
   printf( "%s\n", str2);
   printf( "%s\n", (char *)ft_memchr(str2, 'o', 2));
}

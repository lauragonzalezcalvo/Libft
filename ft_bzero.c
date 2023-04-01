/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:55:07 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/01 19:13:23 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = s;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
/*
#include<stdio.h>
#include <strings.h>
int main(void) {
   char str[50] = "Este es un ejemplo de bzero";
   
   printf("Antes de bzero: %s\n", str);
   
   ft_bzero(str, 10);
   
   printf("Después de bzero: %s\n", str);
   
   return 0;
}*/

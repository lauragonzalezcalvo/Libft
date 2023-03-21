/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:43:02 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/17 11:43:05 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Busca la primera aparicion del caracter c en el strign str. 
 Devuelve el string a partir del caracter introducido. Sino lo contiene devuelve null*/

#include"libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i=0;
    while(s[i])
}


int main(void)
{
    printf("%s\n", strchr("hello", 'e'));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:21:21 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/01 19:28:55 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
* La función putchar_fd() toma como argumento un char y un int, el character
 * a escribir y el file descriptor del write.
 * VALOR DEVUELTO
 * VOID - Pinta el char*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('c', 2);
}*/

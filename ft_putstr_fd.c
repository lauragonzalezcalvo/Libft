/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:58:38 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/29 13:15:01 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		write(fd, &s[i],1);
		i++;
	}
}

int	main(void)
{
	char	*str = "hola jose ramon";
	ft_putstr_fd(str, 1);
}

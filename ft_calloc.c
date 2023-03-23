/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:48:51 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/23 12:32:34 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc (count * size);
	if (str == 0)
		return (0);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
/*
int	main(void)
{
	int *n;
	n = (int *)calloc( 10, sizeof(int) );
	printf( "%d\n", *n);

	int *n2;
	n2 = (int *)ft_calloc( 10, sizeof(int) );
	printf( "%d\n", *n2);
}*/

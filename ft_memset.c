/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:41:13 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/13 13:07:38 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void *memset(void *b, int c, size_t len)
{
	unsigned char *p = b;
	unsigned char v = c;
	int i;

	i = 0;
	while(i < len)
	{
		i++;
		*p++ = v;
	}
	return (b);
}
int	main(void *b)
{
	printf("%zu", ft_memset(b, 5, 2));
}
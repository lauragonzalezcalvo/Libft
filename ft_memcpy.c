/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:45:52 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/01 19:27:23 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dest;
	const char		*origin;
	size_t			i;

	dest = dst;
	origin = src;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		dest[i] = origin[i];
		i++;
	}
	return ((void *)dst);
}
/*
int main(void)
{
	char dest1[5] = "holi";
	char org1[5] = "holi";

    printf("%p\n", memcpy(dest1, org1, 5));
    printf("%p\n", ft_memcpy(dest1, org1, 5));
    return 0;
}
*/

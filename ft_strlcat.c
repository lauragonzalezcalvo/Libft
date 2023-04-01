/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:39:32 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/01 19:47:03 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst && dstsize == 0)
		return (0);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0' && i < (dstsize - 1))
		i++;
	while (i < (dstsize - 1) && *src)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
/*
int main(void)
{
    char a[4] = "holi";
    char b[5] = "holis";

    printf("%lu\n", strlcat(a, b, 4));
    printf("%lu\n", strlcat(a, b, 4));
}*/

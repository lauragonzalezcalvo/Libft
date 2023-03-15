/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:45:52 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/15 16:39:16 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *dest = (char *)dst;
	char *origin = (char *)src;
	size_t i;

	i = 0;
	while (i < n)
	{
		origin[i] = dest[i];
		i++;
	}
	return (dest);
}

#include"libft.h"

int main(void)
{
	char str[10] = "holi";
    printf("%s", ft_memcpy(str, "hello", 2));
}

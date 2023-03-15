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

#include"libft.h"

void *ft_memcpy(void  dst, const void src, size_t n)
{
	// char *dest = (char *)dst;
	// char *origin = (char *)src;
	// size_t i;

	// i = 0;
	// while (i < n)
	// {
	// 	origin[i] = dest[i];
	// 	i++;
	// }
	// return (dest);

	char *dest;
	char *origin;
	size_t i;

	dest = dst;
	origin = src;
	i = 0;
	while(i < n)
	{
		origin[i] = dest[i];
		i++;
	}
	return dest;


int main(void)
{
	char str[5] = "holi";
	char str2[5] = "holi";
    printf("%s", ft_memcpy(str, str2, 2));
}

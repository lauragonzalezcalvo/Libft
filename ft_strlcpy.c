/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:04:51 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/13 16:05:04 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t x;
    const char *src1;


    src1 = (char *)src;
    x = ft_strlen(src1);
    i = 0;
    if (dstsize != 0)
    {
        while (src1[i] != '\0' && i < dstsize - 1)
        {
            dst[i] = src1[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (x);
}
/*
int main(void)
{
    char a[4] = "holi";
    char b[5] = "holis";

    char c[4] = "holi";
    char d[5] = "holis";
    printf("%zu\n", ft_strlcpy(a, b, 4));
    printf("%zu\n", strlcpy(c, d, 4));
    return(0);
}*/
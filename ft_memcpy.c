/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:45:52 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/15 16:29:33 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{

}

#include"libft.h"

int main(void)
{
	char str[10] = "holi";
    printf("%s", ft_memcpy(str, "hello", 2));
}

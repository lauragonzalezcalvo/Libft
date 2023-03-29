/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:41:23 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/17 11:41:25 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >=  65 && c <= 90)
        c = c + 32;
    return (c);
}
/*
int main(void)
{
    printf("%d\n", tolower('7'));
    printf("%d\n", ft_tolower('7'));
}*/

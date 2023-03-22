/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:34:02 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/22 19:48:00 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_atoi(const char *str)
{
	char	*a;
	int	i;
	int	n;
	int	number;

	a = (char *)str;
	i = 0;
	n = 1;
	number = 0;
	while ((a[i] >= '\t' && a[i] <= '\r') || a[i] == ' ')
		i++;
	while (a[i] == '-' || str[i] == '+')
	{
		if (a[i] == '-')
			n *= -1;
		i++;
	}
	while (a[i] >= '0' && a[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * n);

}

int	main(void)
{
	printf("%d", atoi("12abc1234ab567"));
	printf("%d", ft_atoi("12abc1234ab567"));	
}

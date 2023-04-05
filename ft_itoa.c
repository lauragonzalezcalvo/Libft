/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:13:17 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/05 16:40:17 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_extra( int n)
{
	int	len;
	int	temp;

	len = 0;
	temp = n;
	if (temp <= 0)
	{
		len ++;
		temp = -temp;
	}
	while (temp != 0)
	{
		temp = temp / 10;
		len ++;
	}
	return (len);
}

char	*ft_numbers(int n, int len, char *str)
{
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
			str[len--] = (n % 10) + 48;
			n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		temp;

	len = ft_extra(n);
	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	temp = n;
	str[len--] = '\0';
	str = ft_numbers(n, len, str);
	return (str);
}

/*int main (void)
{
     int num = -123;
    char *str = ft_itoa(num);

    printf("El número %d convertido a una cadena es: %s\n", num, str);
  int num2 = -2147483648;
    char *str2 = ft_itoa(num2);

    printf("El número %d convertido a una cadena es: %s\n", num2, str2);
   
    return 0;
}*/

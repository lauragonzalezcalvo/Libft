/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:46:23 by laurgonz          #+#    #+#             */
/*   Updated: 2023/06/17 11:46:25 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	struct s_list	*p;
	int				len;

	len = 0;
	p = lst;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return (len);
}

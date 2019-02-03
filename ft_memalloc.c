/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efriedma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:30:10 by efriedma          #+#    #+#             */
/*   Updated: 2019/02/03 00:13:36 by efriedma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (size)
	{
		ptr = malloc(size);
		if (ptr)
		{
			ft_bzero(ptr, size);
			return (ptr);
		}
	}
	return (0);
}

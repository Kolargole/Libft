/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:16:37 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/04 13:55:05 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*tmp;

	tmp = dst;
	if (src == NULL || dst == NULL)
	{
		return (dst);
	}
	if (dst < src)
	{
		return (ft_memcpy(dst, src, n));
	}
	else if (dst > src)
	{
		while (n)
		{
			n--;
			*((char *)dst + n) = *((char *)src + n);
		}
	}
	return (tmp);
}

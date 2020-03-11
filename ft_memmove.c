/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:45:34 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 16:46:39 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i_dst;
	char			*n_dst;
	const char		*n_src;

	i_dst = len - 1;
	n_dst = (char *)dst;
	n_src = (const char *)src;
	if (!dst && !src)
		return (dst);
	if (src == dst)
		return (dst);
	else if (src < dst)
	{
		while ((int)(--len) >= 0)
		{
			n_dst[i_dst] = n_src[len];
			i_dst--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}


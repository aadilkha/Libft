/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:28:33 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 18:16:48 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t n;
	size_t res;

	n = ft_strlen(dst);
	res = ft_strlen(src);
	if (dstsize < n)
		res += dstsize;
	else
		res += n;
	while (*src && n + 1 < dstsize)
	{
		dst[n++] = *src;
		src++;
	}
	dst[n] = '\0';
	return (res);
}


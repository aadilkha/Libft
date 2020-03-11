/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:04:57 by aadilkha          #+#    #+#             */
/*   Updated: 2020/02/24 20:17:44 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	while (haystack[i])
	{
		while (needle[n] != '\0')
		{
			if (needle[n] == haystack[i + n])
				n++;
			else
				break ;
		}
		if (needle[n] == '\0' || (n == len))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

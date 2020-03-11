/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:11:22 by aadilkha          #+#    #+#             */
/*   Updated: 2020/02/25 20:29:54 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int n;

	i = 0;
	while (haystack[i] != '\0')
	{
		n = 0;
		while (needle[n] != '\0')
		{
			if (needle[n] == haystack[i + n])
				n++;
			else
				break ;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

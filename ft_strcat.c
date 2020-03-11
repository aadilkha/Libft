/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:46:14 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 20:18:20 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i])
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
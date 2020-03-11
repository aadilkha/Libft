/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:47:02 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 16:48:12 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *fresh;

	if (s1 == NULL || s2 == NULL)
		return NULL;

	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (fresh == NULL)
		return NULL;

	ft_strcpy(fresh, s1);
	ft_strcat(fresh + ft_strlen(s1), s2);
	return (fresh);
}


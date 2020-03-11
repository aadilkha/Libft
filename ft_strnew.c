/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 23:08:18 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/08 23:26:25 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strnew(size_t size)
{
	size_t i;
	char *s;

	i = 0;
	s = (char *)malloc((size + 1)* sizeof(char));
	if (s == NULL)
		return NULL;
	while (i <= size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}


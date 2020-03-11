/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:40:46 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 20:18:54 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int n;
	int diff;

	i = 0;
	n = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[n])
	{
		n++;
	}
	diff = (i - n);
	return (diff);
}

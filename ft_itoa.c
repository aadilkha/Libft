/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 19:29:58 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 19:31:42 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*new;
	int		end;

	end = ft_nbrlen(n);
	new = (char *)malloc(sizeof(char) * end + 1);
	if (new == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(new, "-2147483648"));
	if (n < 0)
	{
		n = -n;
		new[0] = '-';
	}
	new[end] = '\0';
	end--;
	if (n == 0)
		new[end] = '0';
	while (n > 0)
	{
		new[end] = n % 10 + 48;
		n = n / 10;
		end--;
	}
	return (new);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 11:49:02 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 20:16:59 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int i;
	int result;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] == '\t') || (str[i] == '\n') ||
	(str[i] == '\r') || (str[i] == '\v') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	return (result * sign);
}

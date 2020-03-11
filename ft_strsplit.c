/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 13:42:14 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 16:52:10 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	char **fresh;
	int i;
	int x;
	int y;

	i = 0;
	x = 1;
	y = 0;
	
	fresh = (char *)malloc(sizeof(char) * ft_strlen(s));

	if (fresh == NULL)
	   return (NULL);	
	
	while (s[i])
	{
		if ((s[i]) == c)
			i++;
		else
			fresh[x][y] = s[i];
		i++;
		y++;
	}
	return(fresh);
}

int	main()
{
	char s[] = "*Hello*World*";
	char c = '*';
	printf("%s", ft_strsplit(s, c));
	return (0);
}

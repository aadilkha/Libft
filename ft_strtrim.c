/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadilkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:48:27 by aadilkha          #+#    #+#             */
/*   Updated: 2020/03/10 16:54:23 by aadilkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <libc.h>

char	*ft_strtrim(char const *s)
{
	char *fresh;
	char *str;
	int i;
	int n;
	int len;

	i = 0;
	n = 0;
	len = ft_strlen(s) - 1;
	str = (char *)malloc(sizeof(char) * strlen(s));
	fresh = (char *)malloc(sizeof(char) * strlen(s));
	if (fresh == NULL)
		return (NULL);
	while (s[i])
	{
		if ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		{
			printf("test1");
			i++;
		}
		if ((s[len] == ' ') || (s[len] == '\n') || (s[len] == '\t'))
		{
			printf("test2");
			len--;
		}
		else
		{
			printf("test3");
			return (ft_strncpy(str, s, ft_strlen(s)));
		}
		i++;
	}
	while (i <= len)
	{
		fresh[n] = s[i];
		n++;
		i++;
	}
	return (fresh);
}

int	main()
{
	char s[] = "  Aig ul  ";
	printf("[%s]", ft_strtrim(s));
	return (0);
}

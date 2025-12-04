/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <lupetill@student.42berlin.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 08:01:46 by luciano           #+#    #+#             */
/*   Updated: 2025/12/04 12:03:58 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	
	i = 0;
	if (!s[i])
		return (0);
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char	const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (words(s, c) + 1));
	if (!str || !s)
		return (NULL);	
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			if(!ft_strchr(&s[i], c))
				len = ft_strlen(&s[i]);
			else
				len = ft_strchr(&s[i], c) - &s[i];
			str[j] = ft_substr(&s[i], 0, len);
			j++;
			i += len;
		}
	}
	str[j] = NULL;
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	char	c;
	char	**sp;
	str = "      split       this for   me  !       ";
	c = ' ';
	sp = ft_split(str, c);
	while (*sp)
		printf("%s\n", *sp++);
	return (0);
}*/

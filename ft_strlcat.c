/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetill <lupetill@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:38:17 by lupetill          #+#    #+#             */
/*   Updated: 2025/11/26 18:24:45 by lupetill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstl;
	size_t	srcl;
	size_t	space;
        	
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (size == 0 || dstl >= size)
		return (dstl + srcl);
	space = size - dstl - 1;
	i = 0;
	while (src[i] && i < space)
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (dstl + srcl);
}

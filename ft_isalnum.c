/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <lupetill@student.42berlin.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 12:03:13 by luciano           #+#    #+#             */
/*   Updated: 2025/11/21 13:45:59 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	isalnum(int c)
{
	char	*p;
	p = 0;
	*p = (char)c;
	if (ft_isalpha(p) || ft_isdigit(p))
		return (1);
	return (0);
}

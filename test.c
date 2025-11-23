/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetill <lupetill@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:42:39 by lupetill          #+#    #+#             */
/*   Updated: 2025/11/21 13:58:47 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*c;
	int	a;

	c = "Hola";
	if (ft_isalpha(c))
		printf("ft_ isalpha -> %s = is alpha\n", c);
        c = "123";
	if (ft_isdigit(c))
                printf("ft_ isalpha -> %s = is digit\n", c);
	c = "1";
	a = *c;
	if (ft_isalnum(a))
                printf("ft_ isalnum -> %s = is alphanumeric\n", c);	
	c = "a";	
	a = *c;
	if (ft_isalnum(a))
                printf("ft_ isalnum -> %s = is alphanumeric\n", c);
	return (0);
}


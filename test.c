/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetill <lupetill@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:42:39 by lupetill          #+#    #+#             */
/*   Updated: 2025/11/19 15:08:16 by lupetill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*c;

	c = "Hola";
	if(ft_isalpha(c))
		printf("ft_ isalpha -> %s = is alpha\n", c);
        c = "123";
	if(ft_isdigit(c))
                printf("ft_ isalpha -> %s = is digit\n", c);	
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetill <lupetill@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:42:39 by lupetill          #+#    #+#             */
/*   Updated: 2025/11/24 21:32:25 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void test_alpha(void)
{
	char	*c;
	int	i;
	
	i = 0;
	c = "abcdefghijklmnopqrstuvwxyz";
	printf("#_ FUNTION isalpha:\n\tinputs -> 'a' 'b' 'c'...'z'\n");
	while(c[i++])
	{
		if (ft_isalpha(c[i]))
			i++;
		else
		{
			printf("\tFAIL IN -> %c\n", c[i]);
			break;
		}
		if (!c[i])
			printf("\t--PASS--\n");        
	}
	i = 0;
	c = "0 0123456789´?*#!&%712";
	printf("\tinputs -> 0123456789´?*#!&712\n");
	while(c[i++])
	{
		if (!c[i])
		{
			printf("\t--PASS--\n");
			break;
		}
		if (!ft_isalpha(c[i]))
			i++;
		else
		{
			printf("\tFAIL IN -> %c\n", c[i]);
			break;
		}
       	}
}

void test_digit(void)
{
	char	*c;
	int	i;
	
	i = 0;
	c = "0123456789";
	printf("#_ FUNTION isdigit:\n\tinputs -> '1' '2' '3'...'0'\n");
	while(c[i++])
	{
		if (ft_isdigit(c[i]))
			i++;
		else
		{
			printf("\tFAIL IN -> %c\n", c[i]);
			break;
		}
		if (!c[i])
			printf("\t--PASS--\n");        
	}
	i = 0;
	c = "abcdefghijklmnopqtuvwxyz´?*#!&";
	printf("\tinputs -> abcdefghijklmnopqtuvwxyz´?*#!&\n");
	while(c[i++])
	{
		if (!c[i])
		{
			printf("\t--PASS--\n");
			break;
		}
		if (!ft_isdigit(c[i]))
			i++;
		else
		{
			printf("\tFAIL IN -> %c\n", c[i]);
			break;
		}
       	}
}

void test_alnum(void)
{
	char	*c;
	int	i;
	
	i = 0;
	c = "01d2b34a56cz789";
	printf("#_ FUNTION isalnum:\n\tinputs -> 01d2b34a56cz789\n");
	while(c[i])
	{
		if (ft_isalnum(c[i]))
			i++;
		else
		{
			printf("\tFAIL IN -> %c\n", c[i]);
			break;
		}
		if (!c[i])
			printf("\t--PASS--\n");        
	}
	i = 0;
	c = "();,.§´?*#!&";
	printf("\tinputs -> ();,.§´?*#!&\n");
	while(c[i])
	{
		if (!ft_isalnum(c[i]))
			i++;
		else
		{
			printf("\tFAIL IN -> %c\n", c[i]);
			break;
		}
		if (!c[i])
		{
			printf("\t--PASS--\n");
			break;
		}
       	}
}

int	main(void)
{
	test_alpha();
	test_digit();
	test_alnum();
	return (0);
}


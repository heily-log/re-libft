/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruka <haruka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:23:37 by haruka            #+#    #+#             */
/*   Updated: 2023/09/11 18:31:34 by haruka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	return (('a' <= c && c <='z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9'));
}

int	main(void)
{
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('0'));
	printf("%d\n", isalnum('%'));
	
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('%'));
}
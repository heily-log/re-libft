/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 06:38:08 by hakobaya          #+#    #+#             */
/*   Updated: 2023/09/25 06:57:22 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*head;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == NULL)
		return (NULL);
	head = dst;
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (head);
}

int	main(void)
{
	char	*ret;
	char const *s1 = "sdfgh";
	char const *s2 = "yutgvhkj";

	ret = ft_strjoin(s1, s2);
	printf("%s\n", ret);
}
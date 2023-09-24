/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 06:58:16 by hakobaya          #+#    #+#             */
/*   Updated: 2023/09/25 07:17:36 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*head;

	if (s1 == NULL)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dst == NULL)
		return (NULL);
	head = dst;
	while (*s1)
		*dst++ = *s1++;
	*dst = '\0';
	return (head);
}

int	main(void)
{
	char		*ret;
	char const	*s1 = "dfgh";

	ret = ft_strdup(s1);
	printf("%s\n", ret);
}

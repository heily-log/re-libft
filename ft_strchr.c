/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:25:24 by hakobaya          #+#    #+#             */
/*   Updated: 2023/09/26 14:41:33 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*s = "asdfg123456hjkl";
	int	c = '5';

	printf("strchr %s \n", strchr(s, c));
	printf("ft_strchr %s \n", ft_strchr(s, c));
	printf("strchr %s \n", strchr("", c));
	printf("ft_strchr %s \n", ft_strchr("", c));
	//printf("strchr %s \n", strchr(s, ''));
	//printf("ft_strchr %s \n", ft_strchr(s, ''));
	printf("strchr %s \n", strchr("", ""));
	printf("ft_strchr %s \n", ft_strchr("", ""));
	printf("strchr %s \n", strchr(123, c));
	printf("ft_strchr %s \n", ft_strchr(123, c));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 07:04:18 by hakobaya          #+#    #+#             */
/*   Updated: 2023/09/26 14:29:23 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*strchr(const char *s, int c);
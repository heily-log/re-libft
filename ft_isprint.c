/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruka <haruka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:46:39 by haruka            #+#    #+#             */
/*   Updated: 2023/09/09 16:17:25 by haruka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_isprint(int c)
{
    return (32 <= c && c <= 126);
}

#include <ctype.h>

int    main(void)
{
    printf("%d\n", isprint('a'));
    printf("%d\n", isprint('1'));
    printf("%d\n", isprint('K'));
    printf("%d\n", isprint(0));
    printf("%d\n", isprint(-1));

    printf("%d\n", ft_isprint('a'));
    printf("%d\n", ft_isprint('1'));
    printf("%d\n", ft_isprint('K'));
    printf("%d\n", ft_isprint(0));
    printf("%d\n", ft_isprint(-1));
}
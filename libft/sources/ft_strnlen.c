/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:29:56 by tgwin             #+#    #+#             */
/*   Updated: 2022/04/27 14:29:57 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	char	*ptr;

	ptr = ft_memchr(s, '\0', maxlen);
	if (ptr)
		return ((size_t)(ptr - s));
	return (maxlen);
}

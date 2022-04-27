/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:26:22 by tgwin             #+#    #+#             */
/*   Updated: 2022/04/27 14:26:23 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	sym;

	ptr = (unsigned char *)b;
	sym = (unsigned char)c;
	while (len--)
		*ptr++ = sym;
	return (b);
}

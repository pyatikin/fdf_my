/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:28:04 by tgwin             #+#    #+#             */
/*   Updated: 2022/04/27 14:28:05 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (ptr1[i] || ptr2[i])
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

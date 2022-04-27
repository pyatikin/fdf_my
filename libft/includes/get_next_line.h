/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:42:07 by tgwin             #+#    #+#             */
/*   Updated: 2022/04/27 14:42:08 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
size_t	ft_2_strlen(char *s);
char	*ft_2_strdup(char *s);
char	*ft_2_strchr(char *s, char c);
char	*ft_2_strjoin(char *s1, char *s2);
char	*ft_2_substr(char *s, int start, int len);

#endif

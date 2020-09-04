/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:11:30 by deddara           #+#    #+#             */
/*   Updated: 2020/09/04 10:13:15 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <stdio.h>
# include <unistd.h>

size_t		ft_strlen(const char *s);
char 		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);

#endif
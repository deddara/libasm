/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:08:12 by deddara           #+#    #+#             */
/*   Updated: 2020/09/03 18:44:10 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>
#include <stdlib.h>

static int count_bytes(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	if(str[i] == '\0')
		i++;
	return (i);
}

static int failure()
{
	printf("\033[31m[-] FAILURE\n\033[0m");
	printf("\033[32m-------------------------------------------------\n\033[0m");
	return (0);
}

static int strlen_test2(char *str, int num)
{
	int s;
	int ft_s;

	printf("\033[36m[%d] \033[0m", num);
	printf("\033[36mtest string : \"%s\"\n\033[0m", str);
	s = strlen(str);
	ft_s = ft_strlen(str);
	printf("strlen: %4d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
		failure();
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	return (1);
}

static int strlen_test(void)
{
	if (!strlen_test2("hello", 1))
		return (0);
	if (!strlen_test2("Something in the way...", 2))
		return (0);
	if (!strlen_test2("", 3))
		return (0);
	if (!strlen_test2("42", 4))
		return (0);
	if (!strlen_test2("Such a lonely day, and it's mine.", 5))
		return (0);
	return (1);
}

static int strcpy_test2(char *src, int num)
{
	char *dst;
	char *dst2 = NULL;
	
	printf("\033[36m[%d] \033[0m", num);
	printf("\033[36mtest source string : \"%s\"\n\033[0m", src);
	if(!(dst = malloc(strlen(src) + 1)) || !(dst2 = malloc(strlen(src) + 1)))
		printf("\033[31m[-] MALLOC ERROR\n\033[0m");
	printf("strcpy: \033[33m%5s\033[0m [%d]\n", strcpy(dst, src), count_bytes(dst));
	if (!(ft_strcpy(dst2, src)))
		return(failure());
	printf("ft_strcpy: \033[33m%5s\033[0m [%d]\n", dst2, count_bytes(dst2));
	if (strcmp(dst2, dst) != 0 || count_bytes(dst) != count_bytes(dst2))
		return(failure());
	printf("\033[32m[+] PASSED\n\n\033[0m");
	free (dst);
	free (dst2);
	return (1);
}

static int	strcpy_test()
{
	if (!(strcpy_test2("hello", 1)))
		return (0);
	if (!(strcpy_test2("I wanna I got it", 2)))
		return (0);
	if (!(strcpy_test2("", 3)))
		return (0);
	if (!(strcpy_test2("r", 4)))
		return (0);
	if(!(strcpy_test2("I thought I had it all together But I was led astray The day you walked away You were the clock", 5)))
		return (0);
	return (1);
}

int main(void)
{
	/* STRLEN TEST */
	printf("\033[32m===STRLEN TEST===\n\033[0m");
	printf("\033[32m-------------------------------------------------\n\033[0m");
	if(!(strlen_test()))
		return (0);
	printf("\033[32m-------------------------------------------------\n\033[0m");

	printf("\033[32m===STRCPY TEST===\n\033[0m");
	printf("\033[32m-------------------------------------------------\n\033[0m");
	if(!(strcpy_test()))
		return (0);
	printf("\033[32m-------------------------------------------------\n\033[0m");
	return (0);
}
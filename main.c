/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:08:12 by deddara           #+#    #+#             */
/*   Updated: 2020/09/03 18:32:13 by deddara          ###   ########.fr       */
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

static int strlen_test(void)
{
	int s;
	int ft_s;

	printf("\033[36m[1] \033[0m");
	printf("\033[36mtest string : \"hello\"\n\033[0m");
	s = strlen("hello");
	ft_s = ft_strlen("hello");
	printf("strlen: %4d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
		failure();
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	
	printf("\033[36m[2] \033[0m");
	printf("\033[36mtest string : \"\"\n\033[0m");
	s = strlen("");
	ft_s = ft_strlen("");
	printf("strlen: %4d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
		return(failure());
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	printf("\033[36m[3] \033[0m");
	printf("\033[36mtest string : \"Something in the way...\"\n\033[0m");
	s = strlen("Something in the way...");
	ft_s = ft_strlen("Something in the way...");
	printf("strlen: %5d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
		return(failure());
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	printf("\033[36m[4] \033[0m");
	printf("\033[36mtest string : \"42\"\n\033[0m");
	s = strlen("42");
	ft_s = ft_strlen("42");
	printf("strlen: %4d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
		return(failure());
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	printf("\033[36m[5] \033[0m");
	printf("\033[36mtest string : \"Such a lonely day, and it's mine.\"\n\033[0m");
	s = strlen("Such a lonely day, and it's mine.");
	ft_s = ft_strlen("Such a lonely day, and it's mine.");
	printf("strlen: %5d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
		return(failure());
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:08:12 by deddara           #+#    #+#             */
/*   Updated: 2020/09/03 16:12:16 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>
#include <stdlib.h>
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
	{
		printf("\033[31m[-] FAILURE\n\033[0m");
		printf("\033[32m-------------------------------------------------\n\033[0m");
		return (0);
	}
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	
	printf("\033[36m[2] \033[0m");
	printf("\033[36mtest string : \"\"\n\033[0m");
	s = strlen("");
	ft_s = ft_strlen("");
	printf("strlen: %4d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
	{
		printf("\033[31m[-] FAILURE\n\033[0m");
		printf("\033[32m-------------------------------------------------\n\033[0m");
		return (0);
	}
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	printf("\033[36m[3] \033[0m");
	printf("\033[36mtest string : \"Something in the way...\"\n\033[0m");
	s = strlen("Something in the way...");
	ft_s = ft_strlen("Something in the way...");
	printf("strlen: %5d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
	{
		printf("\033[31m[-] FAILURE\n\033[0m");
		printf("\033[32m-------------------------------------------------\n\033[0m");
		return (0);
	}
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	printf("\033[36m[4] \033[0m");
	printf("\033[36mtest string : \"42\"\n\033[0m");
	s = strlen("42");
	ft_s = ft_strlen("42");
	printf("strlen: %4d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
	{
		printf("\033[31m[-] FAILURE\n\033[0m");
		printf("\033[32m-------------------------------------------------\n\033[0m");
		return (0);
	}
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	printf("\033[36m[5] \033[0m");
	printf("\033[36mtest string : \"Such a lonely day, and it's mine.\"\n\033[0m");
	s = strlen("Such a lonely day, and it's mine.");
	ft_s = ft_strlen("Such a lonely day, and it's mine.");
	printf("strlen: %5d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
	{
		printf("\033[31m[-] FAILURE\n\033[0m");
		printf("\033[32m-------------------------------------------------\n\033[0m");
		return (0);
	}
	else
		printf("\033[32m[+] PASSED\n\n\033[0m");
	return (1);
}

static int	strcpy_test()
{
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
	if(!(strcpy_test()))
		return (0);
	printf("\033[32m-------------------------------------------------\n\033[0m");
	return (0);
}
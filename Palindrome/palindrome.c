/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:57:57 by qbarron           #+#    #+#             */
/*   Updated: 2024/09/10 19:36:03 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h> 
#include <stdio.h>
#include <string.h>

char *ft_itoa(int nbr)
{
	if(nbr == -2147483648)
		return(strdup("-2147483648"));
	if(nbr == 0)
		return(strdup("0"));
	int len = 0;
	int n = nbr;
	if(n < 0)
		len++;
	while(n)
	{
		n /= 10;
		len++;
	}
	char *res = (char *)malloc(sizeof(char) * (len + 1));
	if(!res)
		return(NULL);
	res[len] = '\0';
	if(nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		res[--len] = nbr % 10 +'0';
		nbr /= 10;
	}
	return(res);
}

bool is_palindrome(int x)
{
	if(x < 0)
		return(false);
	char *str = ft_itoa(x);
	if(!str)
		return(false);
	int len = strlen(str);
	int i = 0;
	int j = len - 1;
	while(i < j)
	{
		if(str[i] != str[j])
		{
			free(str);	
			return(false);
		}
		i++;
		j--;
	}
	free(str);
	return(true);
}

int main(void)
{
	int x = 1234324;
	int res = is_palindrome(x);
	if(res == true)
		printf("true\n");
	else
		printf("false\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RomanToInteger.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:15:47 by qbarron           #+#    #+#             */
/*   Updated: 2024/09/14 18:27:45 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// i think the easiest solution for now is to create a lookup table
// and either increment or decrement the result compared to the 
// value next to it.

int romainToInt(char *s)
{
	int lookup[128] = {0};
	lookup['I'] = 1;
	lookup['V'] = 5;
	lookup['X'] = 10;
	lookup['L'] = 50;
	lookup['C'] = 100;
	lookup['D'] = 500;
	lookup['M'] = 1000; 

	int result = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		if(lookup[s[i]] < lookup[s[i + 1]])
			result -= lookup[s[i]];
		else 
			result += lookup[s[i]];
	}
	printf("%d\n", result);
	return(result);
}

int main(int argc, char **argv)
{
	char *str = argv[1];
	if(argc == 2)
		romainToInt(argv[1]);
	printf("\n");
	return(0);
}
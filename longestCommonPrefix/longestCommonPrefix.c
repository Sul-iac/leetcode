/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longestCommonPrefix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:41:04 by qbarron           #+#    #+#             */
/*   Updated: 2024/09/16 14:06:52 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char **strs, int strsSize)
{
	char *prefixe = (char *)malloc(sizeof(char) * (strlen(strs[0]) + 1));
	if(!prefixe)
		return(NULL);
	int i = -1;
	while(strs[0][++i])
	{
		char current_char = strs[0][i];
		for(int j = 1; j < strsSize; j++)
		{
			if(!strs[j][i] || strs[j][i] != current_char)
			{
				prefixe[i] = '\0';
				return(prefixe);
			}
		}
		prefixe[i] = current_char;
	}
	prefixe[i] = '\0';
	return(prefixe);
}

int main(void)
{
	char *strings[3] = {"chien", "choix", "chaud"};
	char *res = longestCommonPrefix(strings, 2);
	printf("%s\n", res);
}

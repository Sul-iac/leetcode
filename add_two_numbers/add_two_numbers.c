/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_two_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:29:38 by qbarron           #+#    #+#             */
/*   Updated: 2024/09/06 17:51:54 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "addtwonbr.h"

ListNode *create_node(int data)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->val = data;
	node->next = NULL;
}

int count_list(ListNode *node)
{
	int i = 0;
	while(node != NULL)
	{
		i++;
		node = node->next;
	}
	return(i);
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i = -1;
		char *lst1 = strtok(argv[1], " ");
		char *lst2 = strtok(argv[2], " ");
		printf("%s\n", lst1);
	}
}
// the list can go until 100
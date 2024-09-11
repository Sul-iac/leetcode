/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_two_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:29:38 by qbarron           #+#    #+#             */
/*   Updated: 2024/09/11 19:40:11 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "addtwonbr.h"

ListNode *create_node(int data)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	
	node->val = data;
	node->next = NULL;

	return(node);
}

ListNode *point_to_head(ListNode *head, int data)
{
	ListNode *new_node = create_node(data);
	new_node->next = head;
	head = new_node;
	return(head);
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode *tail = NULL;
	ListNode *res = NULL;	  
	int carry = 0;

	while(l1 != NULL || l2 != NULL || carry != 0)
	{
		int val1 = (l1 != NULL) ? l1->val : 0;
		int val2 = (l2 != NULL) ? l2->val : 0;
		
		int sum = val1 + val2 + carry;	  
		
		carry = sum / 10;
		int new_value = sum % 10;
		ListNode *new_node = create_node(new_value);
		
		if(res == NULL)
		{
			res = new_node;
			tail = new_node;
		}
		else
		{
			tail->next = new_node;
			tail = tail->next;
		}
		if(l1 != NULL) l1 = l1->next;
		if(l2 != NULL) l2 = l2->next;

	}
	//printf("\nliste finale: ");
	//print_list(res);
	//printf("\n");
	return (res);
}


// int main(void)
// {
// 	ListNode *head1 = NULL;
// 	char nbr1[100];
	
// 	printf("chiffres premiere liste: ");
// 	scanf("%s", nbr1);
	
// 	char nbr2[100];
// 	printf("Chiffres de la deuxieme liste: ");
// 	scanf("%s", nbr2);
	
// 	for(int i = 0; nbr1[i] != '\0'; i++)
// 	{
// 		int digit1 = nbr1[i] - '0';
// 		head1 = point_to_head(head1, digit1);
// 	}
// 	printf("liste 1 inversee: ");
// 	print_list(head1);
// 	ListNode *head2 = NULL;
// 	for(int j = 0; nbr2[j]; j++)
// 	{
// 		int digit2 = nbr2[j] - '0';
// 		head2 = point_to_head(head2, digit2);
// 	}
// 	printf("\nListe 2 inversee: ");
// 	print_list(head2);
// 	addTwoNumbers(head1, head2);
// }
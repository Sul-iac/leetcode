/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TwoSums.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:01:11 by qbarron           #+#    #+#             */
/*   Updated: 2024/09/11 20:01:31 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    for(int i = 0; i < numsSize - 1; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                int *result = (int*)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;

                *returnSize = 2;
                return(result);
            }
        }
    }
    return(0);
}
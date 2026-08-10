/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:57:41 by tisilva           #+#    #+#             */
/*   Updated: 2026/08/10 10:48:40 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc((max - min) * sizeof(int));
	if (!arr)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (max - min);
}

// int	main(void)
// {
// 	int	*range;
// 	int	size;
// 	int	i;

// 	size = ft_ultimate_range(&range, 2, 7);

// 	printf("size = %d\n", size);

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	free(range);
// 	return (0);
// }
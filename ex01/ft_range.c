/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:57:39 by tisilva           #+#    #+#             */
/*   Updated: 2026/08/10 10:48:34 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int	*range;
// 	int	i;

// 	range = ft_range(2, 7);
// 	if (!range)
// 		return (1);

// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	free(range);
// 	return (0);
// }

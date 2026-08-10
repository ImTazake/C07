/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:57:35 by tisilva           #+#    #+#             */
/*   Updated: 2026/08/10 10:48:29 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = malloc((i + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int	main(void)
// {
// 	char	*copy;

// 	copy = ft_strdup("Hello 42!");
// 	if (!copy)
// 		return (1);

// 	printf("Original: %s\n", "Hello 42!");
// 	printf("Copia:    %s\n", copy);

// 	free(copy);
// 	return (0);
// }

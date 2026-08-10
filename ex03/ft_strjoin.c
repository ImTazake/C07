/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:57:44 by tisilva           #+#    #+#             */
/*   Updated: 2026/08/10 10:48:45 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_cont(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	count = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	if (count <= 0)
		return (0);
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str;
	int		pos;
	int		len;
	char	*tab;

	tab = malloc(ft_cont(size, strs, sep) * sizeof(char));
	if (size == 0)
		return (tab);
	str = 0;
	len = 0;
	while (str < size)
	{
		pos = -1;
		while (strs[str][++pos])
			tab[len++] = strs[str][pos];
		pos = -1;
		while (sep[++pos] && str < size - 1)
			tab[len++] = sep[pos];
		str++;
	}
	tab[len] = '\0';
	return (tab);
}

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "World", "42"};
// 	char	*result;

// 	result = ft_strjoin(3, strs, ", ");
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }

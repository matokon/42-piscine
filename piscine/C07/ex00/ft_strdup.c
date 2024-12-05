/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:55:33 by mokon             #+#    #+#             */
/*   Updated: 2024/10/21 20:51:10 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		lenght;
	int		i;
	char	*new_str;

	lenght = 0;
	i = 0;
	while (src[lenght])
	{
		lenght++;
	}
	new_str = malloc(sizeof(char) * (lenght + 1));
	if (new_str == 0)
	{
		return (0);
	}
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:17:16 by mokon             #+#    #+#             */
/*   Updated: 2024/10/15 15:39:24 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 1;
	while (j != argc)
	{
		put_char(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}

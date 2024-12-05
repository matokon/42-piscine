/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:52:46 by mokon             #+#    #+#             */
/*   Updated: 2024/10/15 16:44:10 by mokon            ###   ########.fr       */
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
	(void)argc;
	put_char(argv[0]);
	write(1, "\n", 1);
	return (0);
}

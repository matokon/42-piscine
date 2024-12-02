/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:40:16 by mokon             #+#    #+#             */
/*   Updated: 2024/10/09 15:54:05 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	licznik;

	licznik = 0;
	while (str[licznik] != '\0')
	{
		licznik += 1;
	}
	write(1, str, licznik);
}
int	main(void)
{
	char	slowo[] = "string";

	ft_putstr(slowo);
	return (0);
}

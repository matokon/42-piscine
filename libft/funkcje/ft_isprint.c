/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:19:55 by mokon             #+#    #+#             */
/*   Updated: 2024/12/03 15:46:56 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int n)
{
	if (n >= 0 && n <= 31 || n == 127)
		return (0);
	return (1);
}

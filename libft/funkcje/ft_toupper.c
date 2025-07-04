/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:17:02 by mokon             #+#    #+#             */
/*   Updated: 2024/12/03 17:34:06 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char n)
{
	if (n >= 'a' && n <= 'z')
		return (n - 32);
	return (n);
}

// int main()
// {
//     printf("%c", ft_toupper('a'));
//     return (0);
// }
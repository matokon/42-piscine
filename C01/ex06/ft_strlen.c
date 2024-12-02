/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:53:41 by mokon             #+#    #+#             */
/*   Updated: 2024/10/08 12:54:27 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	licznik;

	licznik = 0;
	while (str[licznik] != '\0')
	{
		licznik++;
	}
	return (licznik);
}
// int main(){
//     char slowo[] = "string";
//     ft_strlen(slowo);
//     return (0);
// }
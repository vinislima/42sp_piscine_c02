/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:16:56 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/28 09:37:13 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// essa função verifica se todos os elementos da string
// são alfabéticos e maiúcuslo
int	ft_str_is_uppercase(char *str);
int	ft_strlen(char *str);
// função para saber o tamanho da string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// verifica se o elemento é diferente de nulo
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_uppercase(char *str)
{
	int	count_str;
	// caso a string não tenha elementos retorna um
	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		// o laço permanece enquanto enquanto o elemento for diferente de nulo
		while (str[count_str] != '\0')
		{
			// se o elemento estiver fora do intervalo das letras maiúscula
			// ele retorna zero
			if (str[count_str] <= 64 || str[count_str] >= 91)
				return (0);
			count_str++;
		}
	}
	// caso passe por todos os elementos significa que todos os elementos são
	// letras maiúsculas e retorna um
	return (1);
}

// // início da main
// #include <stdio.h>

// int	ft_str_is_uppercase(char *str);

// int	main(void)
// {
// 	// função colocada direto na função printf, pois temos um retorno
// 	// no primeito devemos ter um, pois na string só há letras maiúscula
// 	printf("%i\n", ft_str_is_uppercase("TAADASD"));
// 	// neste devemos ter zero, pois há uma letra minúscula
// 	printf("%i\n", ft_str_is_uppercase("TAAaASD"));
// 	// neste devemos ter zero, pois há um numeral
// 	printf("%i\n", ft_str_is_uppercase("TAA1ASD"));
// 	return (0);
// }

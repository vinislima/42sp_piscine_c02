/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:56:19 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/27 20:14:51 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// aqui a função testa se na string recebida há somente caracteres numéricos
int	ft_str_is_numeric(char *str);
int	ft_strlen(char *str);
// função para percorrer e saber o tamanho da string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	count_str;
	// caso o tamanho da string for menor ou igual a zero retornamos um
	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		// o laço se repetirá enquanto não encontrar o elemento nulo
		while (str[count_str] != '\0')
		{
			// se o elemento da string estiver fora do intervalo dos
			// caracteres númericos, temos o retorno de zero
			if (str[count_str] <= 47 || str[count_str] >= 58)
				return (0);
			count_str++;
		}
	}
	// caso todos elementos estejam dentro do intervalo dos caracteres numéricos
	// o retorno é um
	return (1);
}

// // inícios da main
// #include <stdio.h>

// int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	// em caso de todos elementos estarem dentro do intervalo
// 	// dos caracteres númericos temos a saída igual a um
// 	printf("%i\n", ft_str_is_numeric("123456789"));
// 	// neste caso como temos uma letra, a saída será zero
// 	printf("%i\n", ft_str_is_numeric("1234A6789"));
// 	return (0);
// }

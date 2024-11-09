/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:44:44 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 08:37:34 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// essa função verifica que os elementos estão dentro da faixa
// de caracteres possíveis de impressão
int	ft_str_is_printable(char *str);
int	ft_strlen(char *str);
// função para saber o tamanho da string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// percorre os elementos da string enquanto não encontrar nulo
	while (str[i] != '\0')
	{
		i++;
	}
	// retorna o tamanho da string
	return (i);
}

int	ft_str_is_printable(char *str)
{
	int	count_str;
	// verifica se a string têm elementos, se não tiver, retorna um
	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		// segue no laço enquanto o elemento da string for diferente de nulo
		while (str[count_str] != '\0')
		{
			// verifica se o elemento não está fora da faixa de caracteres
			// possíveis de impressão, se estiver retorna zero
			if (str[count_str] <= 31 || str[count_str] >= 127)
				return (0);
			// faz um segundo teste para verificar se o elemento é uma quebra de linha,
			// sendo o retorno também é zero
			else if (str[count_str] == '\n')
				return (0);
			count_str++;
		}
	}
	// caso todos os elementos estejam dentro da faixa de caracteres possíveis de impressão
	// o retorno é um
	return (1);
}

// // início da main
// #include <stdio.h>

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	// aqui o retorno deve ser um, pois são todos possíveis de impressão
// 	printf("%i\n", ft_str_is_printable("dasdasdasda"));
// 	// aqui o retorno deve ser zero, pois vinte e sete representa escape
// 	printf("%i\n", ft_str_is_printable(27));
// 	return (0);
// }
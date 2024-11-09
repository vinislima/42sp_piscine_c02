/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:10:38 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/27 19:54:20 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nesta função iremos verificar se todos os elementos
// de um array são letras
int	ft_str_is_alpha(char *str);
int	ft_strlen(char *str);

// criamos uma função para saber o tamanho da array
// pois será utilizado em um dos testes de validação
// da função principal
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

int	ft_str_is_alpha(char *str)
{
	int	count_str;
	// nesse teste, caso a a string não tenha nenhum elemento
	// retornamos o valor um, conforme solicitado
	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		// assim como em exercícios anteriores, percorreremos os
		// elementos do array enquanto ele for diferente de nulo
		count_str = 0;
		while (str[count_str] != '\0')
		{
			// nesse teste verificamos o elemento junto aos valores
			// da tabela ascii, caso esteja fora do intervalo de letras
			// retornaremos o valor zero, que significa que dentro do array
			// há um elemento difente de letra
			if (str[count_str] <= 64 || str[count_str] >= 123)
				return (0);
			// também verificamos o intervalo correspondente da tabela
			// ascii entre letras maiscúlas e minúsculas, nesse caso se
			// o elemento está dentro do intervalo, em caso positivo
			// retornamos o valor de zero também
			else if (str[count_str] >= 91 && str[count_str] <= 96)
				return (0);
			count_str++;
		}
	}
	// caso tenha passado por toda a string sem entrar em nenhuma das condicionais
	// significa que na string há somente letras
	return (1);
}

// // início da main
// #include <stdio.h>

// int	ft_str_is_alpha(char *str);

// int	main(void)
// {
// 	// chamando a função diretamente dentro do printf, porque o temos retorno de inteiro
// 	// aqui podemos fazer o teste passando uma string com letras
// 	// e números e outra apenas com letras, a primeira deve retornar zero e a segunda um
// 	printf("%i\n", ft_str_is_alpha("t134"));
// 	printf("%i\n", ft_str_is_alpha("teste"));
// 	return (0);
// }

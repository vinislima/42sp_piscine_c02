/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:27:55 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 15:18:57 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// parecida com a strcpy, essa função faz a cópia de strins, mas até um limite informado
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count_size;
	int	limit;

	limit = n;
	count_size = 0;
	// nesse laço enquanto o contador for menor que o limite informado
	// e elemento do array original for diferente de nulo e ocorrerá
	while (count_size < limit && src[count_size] != '\0')
	{
		// aqui ocorre a cópia, com o elemento do array recebendo o
		// seu correspondente do array de origem
		dest[count_size] = src[count_size];
		count_size++;
	}
	// esse segundo elemento ocorre para em caso do array de destino
	// ser maior que o origem, os elementos restantes serão preenchidos
	// com nulos
	while (count_size < limit)
	{
		dest[count_size] = '\0';
		count_size++;
	}
	// ocorre o retorno do array de destino
	return (dest);
}

// // início da string
// #include <stdio.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	// declaramos uma string, que será a origem
// 	char *src = "Teste";
// 	// declaramos uma string que será usada como destino
// 	// e colocamos um tamanho nela
// 	char dest[5];
// 	// aqui declaramos e atribuimos um valor de limite
// 	unsigned int n = 3;
// 	// chamamos a funação diretamente dentro do printf para
// 	// impressão da saída dela
// 	printf("%s",ft_strncpy(dest, src, n));
// 	return(0);
// }

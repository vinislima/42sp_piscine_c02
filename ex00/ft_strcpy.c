/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:13:23 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/27 16:31:20 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// essa função emula o comportamento da função
// strcpy, que copia o conteúdo de uma string
// para outra string
char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	// usualmente quando formos utilizar laços
	// de repetição, será necessária a utilização
	// de um inteiro como index
	int	count_char;

	count_char = 0;
	// iremos percorrer a string de origem
	// até enquanto o elemento acessado
	// for diferente de nulo
	while (src[count_char] != '\0')
	{
		// o elemento da string de destino ira
		//receber o correspondente da string de origem
		dest[count_char] = src[count_char];
		count_char++;
	}
	// no final da string cópiada é incluído o elemento nulo
	// que diz ao interpretador que a string chegou ao final
	dest[count_char] = '\0';
	// e a função retorna a o ponteiro da string de destino
	return (dest);
}

// // início da main
// #include <stdio.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	// declaramos e atribumos valores à duas strings
// 	char *src_1 = "Teste";
// 	char *src_2 = "Teste";
// 	// chamamos a função e passamos as variáveis
// 	// utilizamos a função printf para imprimir a saída
// 	printf("Minha: %d\n",ft_strcmp(src_1, src_2));
// 	//printf("Original: %s\n",strcmp(src_1, src_2));
// 	return(0);
// 	// a partir desse ponto é interessante comparar os
// 	// compartamentos das funções criadas, com as originais
// }

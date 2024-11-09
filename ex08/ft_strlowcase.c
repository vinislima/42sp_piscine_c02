/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:16:50 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/28 15:16:04 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// essa função transforma caracteres maiúsculos de um string para minúsculos
char	*ft_strlowcase(char *str);
int		ft_strlen(char *str);
// função para saber o tamanho da string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// laço se mantém enquanto o elemento for diferente de nulo
	while (str[i] != '\0')
	{
		//ocorre o incremento do contador
		i++;
	}
	return (i);
}

char	*ft_strlowcase(char *str)
{
	int	count_str;
	// se a string não possuir elementos, retorna a string
	if (ft_strlen(str) <= 0)
		return (str);
	else
	{
		count_str = 0;
		// enquanto o elemento for diferente de nulo o laço se mantém
		while (str[count_str] != '\0')
		{	
			// se o elemento está dentro da faixa dos caracteres alfabéticos maiúsculos
			if (str[count_str] >= 65 && str[count_str] <= 90)
				// caso esteja o elemento recebe ele mesmo com o acrescimo de trinta e duas
				// posições para alcançar o equivalente em minúsculas
				str[count_str] = str[count_str] + 32;
			count_str++;
		}
	}
	// retorno a ponteiro para o início da string alterada
	return (str);
}

// // início da main
// #include <unistd.h>

// char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	// declaro um arraya e atribuo uma string
// 	char	a[] = "IsSo é 1 TeSTe";
// 	// declaro um ponteiro e atribuo a função que têm o retorno
// 	// apontando o início da string
// 	char	*str = ft_strlowcase(a);
// 	// usando para estudo o while e write
// 	int	count = 0;
// 	while (str[count] != '\0')
// 	{
// 		write(1, &str[count], 1);
// 		count++;
// 	}
// 	return (0);
// }

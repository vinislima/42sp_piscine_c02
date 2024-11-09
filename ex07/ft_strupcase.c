/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:13:26 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/28 12:13:21 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// essa função transforma caracteres alfabéticos minúsculos em maiúsculos
char	*ft_strupcase(char *str);
int		ft_strlen(char *str);
// função para saber o tamanho da string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// se mantém dentro laço enquanto o elemento do array for diferente de nulo
	while (str[i] != '\0')
	{
		// ocorre o incremento do contador;
		i++;
	}
	return (i);
}

char	*ft_strupcase(char *str)
{
	int	count_str;
	// caso a string não tenha elementos ela retorna a própria string
	if (ft_strlen(str) <= 0)
		return (str);
	else
	{
		count_str = 0;
		// enquanto o elemento for diferente de nulo o laço se mantem
		while (str[count_str] != '\0')
		{
			// se o elemento estiver dentro da faixa dos caracteres minúsculos
			// ele entra na condição
			if (str[count_str] >= 97 && str[count_str] <= 122)
				// entrando na condição a ação ira definir o elemento como ele
				// mesmo, mas subtraindo trinta e duas posições para alcançar
				// seu equivalente maiúsculo
				str[count_str] = str[count_str] - 32;
			count_str++;
		}
	}
	// ao final o retorno é o ponteiro para o início da string com as transformações
	return (str);
}

// //início da main
// #include <unistd.h>

// char	*ft_strupcase(char *str);

// int	main(void)
// {
// 	// declaro um aray e atribuo um string para ele
// 	char	a[] = "Isso é apenas 1 teste";
// 	// declaro um ponteiro e atribuo o retorna da função
// 	// pois será um ponteiro
// 	char	*str = ft_strupcase(a);
// 	// somente para estudos optei por utilizar o while, juntamente com
// 	// write
// 	int	count = 0;
// 	while (str[count] != '\0')
// 	{
// 		// junto com o contador o write imprime cada elemento do array
// 		write(1, &str[count], 1);
// 	}
// 	return (0);
// }

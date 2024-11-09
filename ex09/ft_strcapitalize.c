/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:20:19 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/02 12:06:31 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// essa função têm como objetivo normalizar um string
// todo letra em início de frase e após algum simbolo
// deve ser maiúscla, as demais minúscula, letras após
// números devem ser minúsculas.
char	*ft_strcapitalize(char *str);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);
// função para sabermos o tamanho da string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// percorre a string enquanto o elemento for diferente de nulo
	while (str[i] != '\0')
	{
		// incrementa o contador
		i++;
	}
	return (i);
}
// função para transformar todos os caracteres alfabéticos
// em minúsculas, ficando mais fácil realizar a transformação
// para maiúsculas quando necessário
char	*ft_strlowcase(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (str);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{	
			if (str[count_str] >= 65 && str[count_str] <= 90)
				str[count_str] = str[count_str] + 32;
			count_str++;
		}
	}
	return (str);
}
// função que definirá quando o caracter deve ser maiúsculo
char	*ft_strcapitalize(char *str)
{
	// declaramos dois contadores
	// um será para percorrer a string
	// outro funcionará como um sinalizador, que quando ativo
	// sinaliza que o caracter seguinte, se alfabético deve ser maiúsculo
	int	count;
	int	begin_word;
	// contador para percorrer a string se inícia em zero
	count = 0;
	// sinalizador ínicia em um, porque todo começo de frase
	// têm início com maiúscula
	begin_word = 1;
	// a string é passada para a função de deixar ela inteira minúscula
	ft_strlowcase(str);
	// enquanto o elemento for diferente de zero o laço permanecerá
	while (str[count] != '\0')
	{
		// se elemento estiver dentro da faixa dos caracteres numéricos
		// o sinalizador recebe zero para que o caracter alfabético permaneça
		// como minúsculo
		if (str[count] >= '0' && str[count] <= '9')
			begin_word = 0;
		// se o elemento não for númerico, verifica se ele e minúsculo e se
		// o sinalizador está como o valor de um, que significa ativo
		else if ((str[count] >= 'a' && str[count] <= 'z') && begin_word == 1)
		{
			// se o teste anterior for verdadeiro, testamos novamete se o elemento
			// está na faixa de caracteres alfabéticos minúsculos
			if (str[count] >= 'a' && str[count] <= 'z')
				// se estiver, transformamos ele para maiúsculo
				str[count] = str[count] - 32;
			// colocamos o sinalizador para o valor de zero, pois
			// a próximo caracter deve seguir como minúsculo
			begin_word = 0;
		}
		// caso as condições anteriores ainda sejam falsas,
		// caimos nessa que testa se o elemento for diferente da
		// faixa de caracteres minúsculos e diferente da faixa de
		// caracteres númericos, significa que é um outro sinal
		// sendo assim ativos o sinalizador, pois a seguir a caracter
		// alfabético deve ser maiúsculo
		else if (!(str[count] >= 'a' && str[count] <= 'z')
			&& !(str[count] >= '0' && str[count] <= '9'))
		{
			begin_word = 1;
		}
		// incremento do contador
		count++;
	}
	// se retorna a string alterada
	return (str);
}

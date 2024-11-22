# Untitled

## C 02

---

These functions primarily focus on string manipulation and aim to strengthen understanding of character operations, memory management, and pointer usage.

This set of exercises in the C 02 module of the 42 Piscine focuses on string manipulation and memory operations. It involves implementing custom versions of standard library functions (`strcpy`, `strncpy`, `strlcpy`) and utility functions to check string characteristics (e.g., whether strings contain only alphabetic, numeric, printable, uppercase, or lowercase characters). Other tasks include transforming strings (to uppercase, lowercase, or capitalising words), displaying non-printable characters in hexadecimal, and printing memory regions with a formatted representation.

The exercises increase in difficulty and aim to strengthen understanding of C strings, pointers, and memory management. Students must adhere to strict coding norms verified by the Moulinette and should submit their work as specified to pass the automated tests.

- **`ft_strcpy`** - Replicates the behaviour of the `strcpy` function, copying a source string (`src`) to a destination (`dest`).
- **`ft_strncpy`** - Replicates the behaviour of the `strncpy` function, copying up to `n` characters from a source string (`src`) to a destination (`dest`).
- **`ft_str_is_alpha`** - Returns `1` if the string contains only alphabetic characters or is empty, and `0` otherwise.
- **`ft_str_is_numeric`** - Returns `1` if the string contains only numeric characters or is empty, and `0` otherwise.
- **`ft_str_is_lowercase`** - Returns `1` if the string contains only lowercase letters or is empty, and `0` otherwise.
- **`ft_str_is_uppercase`** - Returns `1` if the string contains only uppercase letters or is empty, and `0` otherwise.
- **`ft_str_is_printable`** - Returns `1` if the string contains only printable characters or is empty, and `0` otherwise.
- **`ft_strupcase`** - Converts all the letters in a string to uppercase and returns the modified string.
- **`ft_strlowcase`** - Converts all the letters in a string to lowercase and returns the modified string.
- **`ft_strcapitalize`** - Capitalises the first letter of each word in a string while converting the rest to lowercase.
- **`ft_strlcpy`** - Replicates the behaviour of the `strlcpy` function, copying a source string to a destination and returning the length of the source string.
- **`ft_putstr_non_printable`** - Displays a string to standard output, replacing non-printable characters with their hexadecimal value preceded by `\`.
- **`ft_print_memory`** - Displays a memory area formatted into three columns: the hexadecimal address, the content in hexadecimal, and the printable characters.

## Usage

---

Uncomment the main and use the command below.

```c
cc -Wall -Wextra -Werror {file}
```

---
<details>
    <summary>Exercises:</summary>
    - [ex00:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex00/ft_strcpy.c)
        
        ```c
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
        
        ```
        
    - [ex01](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex01/ft_strncpy.c):
        
        ```c
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
        ```
        
    - [ex02:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex02/ft_str_is_alpha.c)
        
        ```c
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
        ```
        
    - [ex03:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex03/ft_str_is_numeric.c)
        
        ```c
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
        ```
        
    - [ex04:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex04/ft_str_is_lowercase.c)
        
        ```c
        /* ************************************************************************** */
        /*                                                                            */
        /*                                                        :::      ::::::::   */
        /*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
        /*                                                    +:+ +:+         +:+     */
        /*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
        /*                                                +#+#+#+#+#+   +#+           */
        /*   Created: 2024/08/28 08:37:40 by vinda-si          #+#    #+#             */
        /*   Updated: 2024/08/28 09:37:27 by vinda-si         ###   ########.fr       */
        /*                                                                            */
        /* ************************************************************************** */
        
        // a função verifica se na string todos os elementos são
        // caracteres alfabéticos minúsculos
        int	ft_str_is_lowercase(char *str);
        int	ft_strlen(char *str);
        // função para saber o tamanho da string
        int	ft_strlen(char *str)
        {
        	int	i;
        
        	i = 0;
        	// percorre os elementos da string até encontrar
        	// o elemento nulo
        	while (str[i] != '\0')
        	{
        		i++;
        	}
        	return (i);
        }
        
        int	ft_str_is_lowercase(char *str)
        {
        	int	count_str;
        	// se a string não contiver nenhum elemento, retorna um
        	if (ft_strlen(str) <= 0)
        		return (1);
        	else
        	{
        		count_str = 0;
        		// o laço ocorre enquanto não encontrar o nulo
        		while (str[count_str] != '\0')
        		{
        			// verifica se o elemento está fora do intervalo de
        			// caracteres alfabéticos minúsculos, se estiver retorna zero
        			if (str[count_str] <= 96 || str[count_str] >= 123)
        				return (0);
        			count_str++;
        		}
        	}
        	// caso passe por todos os elementos e todos os elementos sejam
        	// minúsculos, retorna um
        	return (1);
        }
        
        // // início da main
        // #include <stdio.h>
        
        // int	ft_str_is_lowercase(char *str);
        
        // int	main(void)
        // {
        // 	// passando direto a função como paramêtro da printf
        // 	// para ver o retorno, no primeiro devemos ter retorno de
        // 	// um pois só há letras minúsculas
        // 	printf("%i\n", ft_str_is_lowercase("aassed"));
        // 	// aqui teremos retorno zero, pois há uma maiúscula
        // 	printf("%i\n", ft_str_is_lowercase("aaAsed"));
        // 	// aqui também o retorno deve ser zero, pois há um numeral
        // 	printf("%i\n", ft_str_is_lowercase("aa1sed"));
        // }
        ```
        
    - [ex05:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex05/ft_str_is_uppercase.c)
        
        ```c
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
        ```
        
    - [ex06:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex06/ft_str_is_printable.c)
        
        ```c
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
        ```
        
    - [ex07:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex07/ft_strupcase.c)
        
        ```c
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
        ```
        
    - [ex08:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex08/ft_strlowcase.c)
        
        ```c
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
        ```
        
    - ex09:
        
        ```c
        /* ************************************************************************** */
        /*                                                                            */
        /*                                                        :::      ::::::::   */
        /*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
        /*                                                    +:+ +:+         +:+     */
        /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
        /*                                                +#+#+#+#+#+   +#+           */
        /*   Created: 2024/08/28 15:20:19 by vinda-si          #+#    #+#             */
        /*   Updated: 2024/11/20 18:38:10 by vinda-si         ###   ########.fr       */
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
        
        // int	main(void)
        // {
        // 	// declaramos e atribuímos uma string à str para
        // 	// testar a função ft_strcapitalize, contém paralavras no
        // 	// início com letra minúsculas e palavras com maiúsculas no
        // 	// meio da string
        // 	char	str[] = " salut, comme TU vas ? 42mots.";
        // 	// passamos para a função a string
        // 	ft_strcapitalize(str);
        // 	// realizamos a impressão da string modificada
        // 	printf("%s\n", str);
        // 	return (0);
        // }
        ```
</details>

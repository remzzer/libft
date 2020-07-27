/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 13:50:25 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/20 14:18:54 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

/*
int		main(void)
{
	char	ar[] = "hello";
	printf("%s",ft_memset(ar, 0, 15));
	return (0);
}

int		main(void)
{
    short s_array[7] = {5, 5, 5, 5, 5, 5, 5};
    size_t pos = 0;

    //bzero(s_array, (5  * sizeof(short)));

    for(pos = 0; pos < 7; pos++) 
	{
        printf("%d\n", s_array[pos]);
    }
    return 0;
}

int		main(void)
{
	char	dest[5] = "";
	char	src[5] = "hello";
	size_t	count = 3;
	size_t		i = 0;

	ft_memcpy(dest, src, count);
	for (i = 0; i < count; i++)
	{
		printf("%c\n", dest[i]);
	}
	return (0);
}

int		main(void)
{
	char	*src = "Bonjour.Bien?";
	size_t	len;
	len = strlen(src);
	char	dest[len];
	size_t		i = 0;

	ft_memccpy(dest, src, '.', len);
	for (i = 0; i < len; i++)
	{
		printf("%c\n", dest[i]);
	}
	return (0);
}

int		main(void)
{
	char	*yo = "Hello";
	char	*yi = "Hello";
	size_t	n = 3;

	printf("%d", ft_strncmp(yo, yi, n));
	return(0);
}

int		main(void)
{
	char	dest[5] = "";
	const char	*src = "o";
	size_t dst_size = ft_strlen(dest);
	//size_t i = 0;
	printf("%zu", ft_strlcpy(dest, src, dst_size));
	return (0);
}

int		main(void)
{
	int		c;

	c = 2;
	printf("%d", ft_isalpha(c));
	return (0);
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;

	(void)argc;
	i = 0;

	tab = ft_split(argv[1], 'e');
	while (tab[i])
	{
		printf("Res:%s\n", tab[i]);
		i++;
	}
	return (0);
}

int		main(int argc, const char **argv)
{
	(void)argc;
	int			i;
	int			res;

	i = 0;
	res = ft_atoi(argv[1]);
	printf("Res:%d\n", res);
	return(0);
}

int		main(int argc, char **argv)
{
	(void)argv;
	char	*tab;

	tab = ft_itoa(argc);
	tab =  ft_itoa(-2147483647);
	printf("Res:%s\n", tab);
	return (0);
}

int		main(int	argc, char **argv)
{
	//(void)argc;
	//(void)argv;
	printf("%p\n", ft_memchr(argv[1], argc, 4));
	return(0);
}

int		main(int argc, char **argv)
{
	(void) argc;
	//(void) argv;
	int		i;

	i = 0;
	while (argv[1][i])
	{
		printf("%d\n", ft_tolower(argv[1][i]));
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		return (666);
	}
	while (argv[i][j])
	{
		j = 0;
		while (argv[i][j])
		{
			printf("res:%c\n", ft_toupper(argv[i][j]));
			j++;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*tab;
	(void)argc;

	tab = ft_substr(argv[1], 1, 5);
	printf("%s", tab);
	return (0);
}
*/
int		main(int argc, char **argv)
{
	char	*tab;

	if (argc == 2)
	{
		tab = ft_strtrim(argv[1], " ");
		printf("Res:%s", tab);
	}
	else
	{
		puts("dafuk");
	}
		return (0);
}

/*
int		main(void)
{
	char	str[10] = "     ";
	printf("Res:%s", ft_strtrim(str, " "));
	return (0);
}

int		main(void)
{
	printf("Res:%s\n", ft_strnstr("frailat", "lat", 7));
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", (char *)ft_lstnew(argv[1])->content); 
	}
	else
		puts("non");
	return(0);
}

void	print_list(t_list *li)
{
	while (li->next != NULL)
	{
		printf("%s\n", (char *)li->content);
		li = li->next;
	}
	printf("%s\n", (char *)li->content);
}

int		main(void)
{
	t_list	*test;
	test = NULL;

	ft_lstadd_front(&test, ft_lstnew("yolo"));
	print_list(test);
	return (0);
}

//Afficher le dernier element de la liste
int		main(void)
{

	char	*str = "test";
	//char	str[] = "test";
	
	t_list		*element_1;
	t_list		*element_2;
	t_list		*element_3;
	t_list		*element_4;
	t_list		*element_5;
	t_list		*element_6;
	t_list		*res;

	if (!(element_1 = malloc(sizeof(t_list))))
		return (0);
	if (!(element_2 = malloc(sizeof(t_list))))
		return (0);
	if (!(element_3 = malloc(sizeof(t_list))))
		return (0);
	if (!(element_4 = malloc(sizeof(t_list))))
		return (0);
	if (!(element_5 = malloc(sizeof(t_list))))
		return (0);
	if (!(element_6 = malloc(sizeof(t_list))))
		return (0);

	element_1->next = element_2;
	element_2->next = element_3;
	element_3->next = element_4;
	element_4->next = element_5;
	element_5->next = element_6;
	element_6->next = NULL;

	//(*element_6).content = (void *)str;
	element_6->content = (void *)str;
	res = ft_lstlast(element_1);
	printf("Res:%s\n", (char *)res->content);
	return (0);
}

void	print_list(t_list *li)
{
	while (li->next != NULL)
	{
		printf("%s\n", (char *)li->content);
		li = li->next;
	}
	printf("%s\n", (char *)li->content);
}

int		main(void)
{
	t_list		*last_element;
	last_element = NULL;

	ft_lstadd_back(&last_element, ft_lstnew("yolo"));
	ft_lstadd_front(&last_element, ft_lstnew("first"));
	ft_lstadd_front(&last_element, ft_lstnew("Second"));
	print_list(last_element);
	return (0);
}
*/















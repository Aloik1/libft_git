/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:43:11 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 20:41:55 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>
#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int    main(void)
{
//	char    *str;
//	const char    *src;
//	char    *dest;

//	src = malloc(sizeof(char) * 15);
//	str = malloc(sizeof(char) * 15);
//	ft_strcpy(src, "kjhdh");
//	dest = malloc(sizeof(char) * 15);
//	ft_strcpy(dest, "");

//	printf("%s\n", ft_memset(str, 65, 5));

//	printf(">%s<\n", ft_memcpy(str, src, 5));
//	printf(">%s<\n", memcpy(str, src, 5));

//	ft_bzero(str, 5);

//	printf("%s\n", ft_memccpy(str, src, 65, 5));

//	printf(">%s<\n", ft_memmove(str, src, 5));
//	printf(">%s<\n", memmove(str, src, 5));

//	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
//	printf("%s\n", memchr("", 65, 5));

// 	printf("%d\n", ft_memcmp("HellA", "Hella", 5));
//	printf("%d\n",  memcmp("HellA", "Hella", 5));

// 	printf("%d\n", ft_strlen("Hello"));
// 	printf("%s\n", ft_strdup("Hello"));
//	printf("%s\n", ft_strcpy(str, "Byey"));
//	printf("%s\n", ft_strncpy(str, "Byebye", 2));
//	printf("%s\n", ft_strcat(dest, "Byebye"));
//	printf("%s\n", ft_strncat(dest, "Byebye", 4));
//	printf("%d\n", ft_strlcat(dest, "Byebye", 20));

//	printf(">%s<\n", ft_strchr(dest, 65));
//	printf(">%s<\n", strchr(dest, 65));

//	printf("%s\n", ft_strrchr("bonjour", 'b'));
//	printf("%s\n", ft_strstr(dest, str));
//	printf("%s\n", ft_strnstr("asjdiasddiazksd", "diaz" , 15));
//	printf(">%s<\n", ft_strtrim("", ""));
//	printf("%d\n", ft_strcmp(dest, str));
//	printf("%d\n", ft_strncmp("test\200", "test\0", 6));

//	printf("%d\n", ft_atoi(dest));
//	printf("%d\n", atoi(dest));

//	ft_putnbr_fd(INT_MAX, 1);

//	printf(">%s<\n", ft_strdup(src));
//	printf(">%s<\n", strdup(src));

//	printf("%s", ft_itoa(1353));
//	printf(">%s<\n", ft_strjoin("", ""));
//	printf("%d\n", ft_strlcat(dest, "", 3));

	printf(">%s<\n", ft_substr("lorem ipsum dolor", 0, 10));

//	ft_split:
/*	char	*str;
	int		i;

	str = "hellochello   c hello c ";
	i = 0;
	while (ft_split(str, ' ')[i] != NULL)
	{
		printf(">%s<\n", ft_split(str, ' ')[i]);
		i++;
	}
*/
	return (0);
//	free(dest);
//	free(str);
//	free(src);
	return (0);
}

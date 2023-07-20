/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <mhynynen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:45:15 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/20 18:33:05 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_lngh(char **strs, int size, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ((size -1) * ft_strlen(sep)) + 1;
	return (total_len);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		total_len;

	if (size <= 0 || strs == NULL || sep == NULL)
	{
		str = (char *)malloc(1);
		if (str != NULL)
			*str = '\0';
		return (0);
	}
	total_len = ft_lngh(strs, size, sep);
	str = (char *)malloc(total_len);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*int main()
{
	char	*strs[] = {"Moi", "Hei", "Hoi", "Tsau"};
	char	*sep = ", ";

	char *result = ft_strjoin(4, strs, sep);

	if (result != NULL)
	{
		printf("%s", result);
		free(result);
	}
}*/

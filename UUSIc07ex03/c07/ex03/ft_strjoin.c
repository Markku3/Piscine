#include <stdlib.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int ft_lngh(char **strs, int size, char *sep)
{
	int total_len = 0;
	int i;

	i = 0;
	for (i < size; i++)
		total_len += ft_strlen(strs[i]);
	total_len += (size -1) * ft_strlen(sep) + 1;
	return (total_len);
}

void ft_strcat(char *dest, char *src)
{
	int dest_len = ft_strlen(dest);
	
	int i;

	i = 0;
	for(src[i] != '\0'; i++)
		dest[dest_len + 1] = src[i];
	dest[dest_len + 1] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if (size <= 0 || strs == NULL || sep == NULL)
	{
		char *str = (char *)malloc(1);
		if (str != NULL)
			*str = '\0';
		return (0);
	}

	int total_len = ft_lngh(strs, size, sep)
	char *str = (char *)malloc(total_len);
	if (str == NULL)
		return (NULL);

	str[0] = '\0',
	for (int i = 0; i < size; i++)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1);
	}
	
	return str;
}

int main(void)
{
	char	*strs[100] = {"Moi", "Hei", "Hoi", "Tsau"};
	char	*sep = ", ";

	char *result = ft_strjoin(4, strs, sep)

	if (result != NULL)
	{
		printf("%s", result);
		free(result);
	}
}

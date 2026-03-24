int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	total_len;
	unsigned int	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	total_len = destlen + srclen;
	i = 0;
	if (destlen >= size)
		return (total_len);
	while (src[i] && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (total_len);
}
#include <stdio.h>
int main()
{
    char dest[13] = {"hello"};
    char *src  = " world";
    printf("%d",ft_strlcat(dest,src,60));
}

